#include <iostream>
#include <iomanip>
using namespace std;


int main (){
string e_name, 
        e_id,
        date;

float m_salary,
        philhealth = 1000.00,
        pag_ibig = 800.00,
        sss = 1200.00,
        withh_tax,    
        L_A, 
        L_A2, 
        late_deduc;

//employees id no.
    cout<< "Enter ID Number: ";
        getline(cin,e_id);

//employees name
    cout<< "Enter Name: ";
        getline(cin,e_name);

//month salary
    cout<< "How much is your monthly salary (eg. 125000): ";
        cin>> m_salary;
        cin.ignore();

//payroll date
    cout<< "Enter Payroll Date (eg. January 1-31, 2019): ";
        getline(cin,date);

//late & absences
    cout<< "Any lates or absences (enter in minutes): ";
        cin>> L_A;
            L_A2 = L_A / 60;
            late_deduc = L_A2 * (m_salary / 30 / 8);
         cin.ignore();

//withholding tax
    withh_tax = m_salary * 0.12;

//output
  
    cout<< "Employee ID: "<< setw(9) << e_id << setw(50) << "Payroll Period: " << date << '\n';
    cout<< "Employee Name: "<< e_name;
    cout<< '\n'<< '\n';
    cout<< "INCOME" << setw(61) << "DEDUCTIONS\n";
    cout<< "Monthly Salary Php"<< setw(8) << fixed << setprecision(2) << m_salary << setw(50)<< "Lates and Absences ("<< late_deduc << ")"<< '\n';
    cout<< setw(66) << "Philhealth"<< setw(10) << "(" << philhealth << ")\n";
    cout<< setw(64) << "Pag-ibig" << setw(12) << "(" << pag_ibig << ")\n";
    cout<< setw(59) << "SSS" << setw(17)<< "(" << sss << ")\n";
    cout<< setw(71) << "Withholding_tax" << setw(5) << "(" << withh_tax << ")\n";
    cout<< "Total Earnings: Php" << m_salary << '\n';
    cout<< "Total Deductions: Php"<< late_deduc + philhealth + pag_ibig + sss + withh_tax<< '\n';
    cout<< "Net pay: "<< m_salary - (late_deduc + philhealth + pag_ibig + sss + withh_tax);


    return 0;
}
