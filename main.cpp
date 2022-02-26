// Tania Jaswal
// CS 219
// Project 2

#include<iostream>
#include <string>
#include <sstream>
#include<fstream>


using namespace std;

int main(){
    std::string operation;
    uint32_t operand1, operand2, result;
    string num;
    char temp;

    std::fstream myfile;
    myfile.open("hex.txt"); // open the file

    if(myfile){ // if file exist
        while(myfile.good()){
            stringstream ss1, ss2; 
            myfile >> operation >> temp >> temp >> num;
            ss1 << hex << num;
            myfile >> temp >> temp >> num;
            ss2 << hex << num;

            //storing in an uint32_t variable
            ss1 >> operand1;

            //storing in an uint32_t variable
            ss2 >> operand2;

            //if operation is "ADD"
            if(operation == "ADD"){
            result = operand1 + operand2;
            
            cout << hex << "The sum of Ox" << operand1 << " and Ox" << operand2 << " is Ox" << result << endl;
            }

            else if(operation == "AND"){

            }

            else if(operation == "ASR"){

            }

            else if(operation == "LSR"){

            }

            else if(operation == "LSL"){

            }

            else if(operation == "NOT"){

            }

            else if(operation == "ORR"){

            }

            else if(operation == "SUB"){

            }

            else if(operation == "XOR"){

            }
        }
        myfile.close(); 
    }
	
    else{
        cout << "Could not open the file!" << endl;
    }

	return 0;
}
