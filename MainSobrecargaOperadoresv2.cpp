#include <iostream>
#include "Pareja.h"

using namespace std;

int main(int argc, char** argv) {
    Pareja A(150,  75);
    Pareja B(100, 15);
    Pareja C;
	cout << "A = " << A     << "\n";
    cout << "B = " << B     << "\n";
    cout << "........................." << endl;
    cout<<"Operador +"     << endl;
	C = A + B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
    cout<<"Operador -"     << endl;
	C = A - B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
    cout<<"Operador *"     << endl;
    C = A * B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;     
    cout<<"Operador /"     << endl;
    C = A / B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
    cout<<"Operador %"     << endl;
    C = A % B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
    cout<<"Operador ++"     << endl;
    ++C;
    cout << "C = " << C     << endl;
    cout << "A == B"    << ((A == B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout<<"Operador --"     << endl;
    --C;
    cout << "C = " << C     << endl;
    cout << "A == B"    << ((A == B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout<<"Operador ++"     << endl;
    C = A = B = ++C;
    cout << "A = " << A     << "\n";
    cout << "B = " << B     << "\n";
    cout << "B = " << B     << endl;
    cout << "........................." << endl;
    cout<<"Operador ||"     << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A || B)"  << ((A || B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout << "Operador &&"   << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A && B)"  << ((A && B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout << "Operador <"    << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A < B)"   << ((A < B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout << "Operador >"    << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A > B)"   << ((A > B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout<<"operador ^"      << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A ^ B)"   << ((A ^ B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    
	
    cout<<"operador !="<< endl;
    cout << "C = " << C << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "(A != B)" << ((A != B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
	
    cout<<"operador |="<< endl;
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;
   	A|=B ;
    cout << "A |=B " << A<< endl;
    cout << "........................." << endl;
	return 0;
}

