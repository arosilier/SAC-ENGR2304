clear
clc
clf
load "grades.dat";
display("The maximum grade is ")
max(grades)
display("The minimum grade is ")
min(grades)
display("The standard deviation is ");
std(grades)
hist(grades);
xlabel("Grade");
ylabel("Frequency");
title("Histogram of Grades");