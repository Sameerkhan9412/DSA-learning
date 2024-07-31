/*vector is dynamic array.
initiaze: vector<int>arr(5)             ✅ 5 size a vector bngya
cout<<"size of vector:"<<arr.size();    🔥to get the size of vector
for(int i=0;i<arr.size();i++){
    cout<<arr[i];                       ✅to print entire vector
}



vector<int>arr(5,2)                     🟢Initailze by 2 and create 5 size vector


arr.push_back(3)                         🟢to push something inside an array
arr.push_back(4)                         🟢to push something inside an array

arr.push_back(4)                         🟢to remove and return  something inside an array
arr.push_back(4)                         🟢to remove and return something inside an array


arr.empty()                               🟢to check array is empty or not.

vector<vector<int>> arr(5,vector<int>(10,0))    🟢initialize 2D vector

printing 2d vector
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){           🟢for printing 2D dynamci arrray.
        cout<<arr[i][j];
    }
}


Jagged Array                    🟢isme koi array kisi bhi size ka hosakta h
vector<vector<int>> arr2;
vector<int>vect1(10,0);
vector<int>vect2(7,2);
vector<int>vect3(8,1);
vector<int>vect4(5,0);


arr2.push_back(vect1);
arr2.push_back(vect2);
arr2.push_back(vect3);
arr2.push_back(vect4);

for(int i=0;i<arr2.size();i++){
    for(int j=0;j<arr2[i].size();j++){           🟢for printing 2D dynamci jagged array.
        cout<<arr[i][j];
    }
}

*/