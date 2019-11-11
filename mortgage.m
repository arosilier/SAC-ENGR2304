clear
clc
clf
load "mortgageData.txt";
plot (mortgageData(:,1), mortgageData(:,2), 'k--');
hold on;
plot (mortgageData(:,1), mortgageData(:,3), 'b:');
hold on;
plot (mortgageData(:,1), mortgageData(:,4), 'r-');
title ('Mortgage Balances over Life of Loan');
legend('Interest Paid', 'Principal Paid', 'Principal Balance');
xlabel('Months');
ylabel('Dollars');