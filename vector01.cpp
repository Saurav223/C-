#include <iostream>
#include <vector>
using namespace std;
  // vec.size() rreturn the size of vector
  void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
  }
int main()
{
    vector<int> vec; // we can also use tmplete to intilize  the data type

    vec.assign(5, 3);
    display(vec);

    vec.push_back(2);   //it insert data in the end of vector
    display(vec);

    vec.pop_back();      //it delete the data of end of vector
    display(vec);

    vec.insert(vec.begin(),1);        //it insert the data inthe vector(location,data) without overwriting
    vec.insert(vec.end()-1,5);           // vector.begin() points  to starting of vector
    display(vec);                       //vector.end() point the location of end of vector
    

    vector<int> vec2;
        int a;
    for(int i=0;i<5;i++){
        cout<<"Enter the data of vector 2"<<endl;
        cin>>a;
        vec2.push_back(a);
    }
    display(vec2);

    swap(vec,vec2);
    cout<<"vec"<<endl;
    display(vec);
    cout<<"vec2"<<endl;
    display(vec2);
    
    vec.clear();               //delete the entire vector
    vec2.clear();
    cout<<"After clear";
    display(vec);
    display(vec2);
    return 0;
}