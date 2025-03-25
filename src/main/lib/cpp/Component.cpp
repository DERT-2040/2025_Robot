#include "lib/include/Component.h"

Component::FunctionMap Component::PreStepCallbacks;
Component::FunctionMap Component::PostStepCallbacks;

Component::Component(std::string componentName)
{
    SetPreStepOrder(0, componentName);
    SetPostStepOrder(0, componentName);
}

void Component::RunAllPreSteps()
{
    for (const auto& values : PreStepCallbacks)
        values.func();
}

void Component::RunAllPostSteps()
{
    for (const auto& values : PostStepCallbacks)
        values.func();
}

void Component::SetPreStepOrder(Values::K PreStepOrderWeight, std::string componentName)
{
    this->PreStepOrderWeight = PreStepOrderWeight; 
    Values newVal{PreStepFunc, PreStepOrderWeight, this, componentName};
    AddFuncToMap(PreStepCallbacks, newVal);

}

void Component::SetPostStepOrder(Values::K PostStepOrderWeight, std::string componentName)
{
    this->PostStepOrderWeight = PostStepOrderWeight; 
    Values newVal{PostStepFunc, PostStepOrderWeight, this, componentName};
    AddFuncToMap(PostStepCallbacks, newVal);
}

bool Component::compareByValue(const Values& a, const Values& b)
{
    return a.key > b.key;  // Sorting by the second (value) of the pair
}


void Component::AddFuncToMap(FunctionMap& map, Values NewValue)
{
    //remove any current entries
    for(auto it = map.begin(); it != map.end(); it++)
    {
        if(it->name == NewValue.name)
        {
            std::cout << "test\n";
            map.erase(it);
            break;
        }
    }
    map.push_back(NewValue);

    std::sort(map.begin(), map.end(), compareByValue);
}

void Component::PrintOrderedList(FunctionMap map)
{
    auto it = map.begin();
    for(size_t i = 0; i < map.size(); i++)
    {
        std::cout << (i+1) << ":\t" << (it+i)->name << std::endl;
    }
    std::cout << std::endl;
}


void Component::PrintOrder()
{
    std::cout << "PreStep Order:" << std::endl;
    PrintOrderedList(PreStepCallbacks);
    
    std::cout << "PostStep Order:" << std::endl;
    PrintOrderedList(PostStepCallbacks);
}
