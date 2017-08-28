// Jack Daniel Kinne
// CIS 106
// lab 3.9, resize arrays
#include <iostream> // cin and cout

using namespace std;


int * resize (int arro[], int* size ) { //method to resize
    
    *size = 2 * *size; // double the size
    int *p = new int[*size];  // new array
    
    for (int x = 0; x <*size; x++){
        if (x<*size)
            p[x]=arro[x]; //populate array with old values
        else 
            p[x] = 0; //populate new values with 0
    }
    return p; //return pointer to the new array
}

int main () {
    
    int x = 0;
    cout << "Please input size of the array"<< endl;
    cin >> x; // size of array
    
    int*o = new int [x]; //array
    
    for (int i = 0; i < x; i++){
        cout << "Please input Value for array space [" << (i + 1) << "]:";
        cin >> o[i]; // array elements
    }
    
    o = resize(o, &x); //hold new array in old pointer, overwritting it.
    
    for (int i = 0; i< x; i++){
        cout << "New Array: ";
        cout << o[i] << endl;  //print new array
    }
    return 0;    
}

/* OUTPUT
Running /home/ubuntu/workspace/lab3/lab3.9.cpp                                                                                          
Please input size of the array                                                                                                          
3                                                                                                                                       
Please input Value for array space [1]:1                                                                                                
Please input Value for array space [2]:2                                                                                                
Please input Value for array space [3]:3                                                                                                
New Array: 1                                                                                                                            
New Array: 2                                                                                                                            
New Array: 3                                                                                                                            
New Array: 0                                                                                                                            
New Array: 0                                                                                                                            
New Array: 0                                                                                                                            
                                                                                                                                        
                                                                                                                                        
Process exited with code: 0




*/