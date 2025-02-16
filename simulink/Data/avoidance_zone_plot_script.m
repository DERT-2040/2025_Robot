clear angle_var height_var angle_var2 height_var2 x_avoid y_avoid x y

arm_length = 20.5;
arm_pivot_offset_x = 2.5;
arm_pivot_offset_y = 6.75;
m = 3/8;
b = -m*arm_pivot_offset_x;

angle_var = [-90:1:5]*pi/180;
height_var = zeros(size(angle_var));
x = zeros(size(angle_var));
y = zeros(size(angle_var));

for k = 1:length(angle_var)
    height_var(k) = arm_length*(m*cos(angle_var(k)) - sin(angle_var(k))) + (m*arm_pivot_offset_x - arm_pivot_offset_y) + b;
    x(k) = arm_length*cos(angle_var(k)) + arm_pivot_offset_x;
    y(k) = arm_length*sin(angle_var(k)) + height_var(k) + arm_pivot_offset_y;
end

x_avoid = [0:0.1:(arm_length+arm_pivot_offset_x)];
y_avoid = m*x_avoid+b;

figure(1), clf
subplot(2,1,1)
plot(angle_var*180/pi, height_var/2)
grid on

subplot(2,1,2)
hold on
for k = 1:length(angle_var)
    plot([arm_pivot_offset_x, x(k)],[height_var(k)+arm_pivot_offset_y, y(k)])
end
plot(x_avoid,y_avoid)
grid on
axis equal

% find index with maximum height value
index = find(ismember(height_var, max(height_var(:))));

% pull out values for angle vs. height lookup table
height_var2 = fliplr(height_var(index:end));
angle_var2 = fliplr(angle_var(index:end));
angle_var2(end) = -90*pi/180;  % set last point to -90 degrees

figure(2), clf
plot(height_var2/2, angle_var2*180/pi)
grid on



