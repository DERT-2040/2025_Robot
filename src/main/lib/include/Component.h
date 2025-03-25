#pragma once
#include <iostream>
#include <functional>
#include <vector>
#include <map>
#include <algorithm>

#if false 
    #define __CANdle__
    #define __LIMELIGHT__
    #define LIMELIGHTHELPERS_H
#endif

class Component
{
public:
    Component(std::string componentName);

    static void RunAllPreSteps();
    static void RunAllPostSteps();    
    static void PrintOrder();
protected:
    struct Values
    {
        typedef std::function<void()> F;
        typedef int K;
        typedef Component* P;
        F func;
        K key;
        P ptr;
        std::string name;
    };
    typedef std::vector<Values> FunctionMap;


    void SetPreStepOrder(Values::K PreStepOrderWeight, std::string componentName);
    void SetPostStepOrder(Values::K PostStepOrderWeight, std::string componentName);


private:

    /**
     * Component specific callback that runs before the simulink step function
     */
    virtual void PreStepCallback() = 0;

    /**
     * Component specific callback that runs after the simulink step function
     */
    virtual void PostStepCallback() = 0;
    


    void AddFuncToMap(FunctionMap& map, Values NewValue);
    Values::K GetPreStepOrder() { return PreStepOrderWeight; }
    Values::K GetPostStepOrder() { return PostStepOrderWeight; }
    static bool compareByValue(const Values& a, const Values& b);
    static void PrintOrderedList(FunctionMap map);

    std::function<void()> PreStepFunc {std::bind(&Component::PreStepCallback, this)};
    std::function<void()> PostStepFunc {std::bind(&Component::PostStepCallback, this)};

    Values::K PreStepOrderWeight = 0;
    Values::K PostStepOrderWeight = 0;

    static FunctionMap PostStepCallbacks;
    static FunctionMap PreStepCallbacks;
    
};