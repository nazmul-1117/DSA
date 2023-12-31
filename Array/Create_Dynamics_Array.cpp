#include <bits/stdc++.h>
using namespace std;

//array insert
//array delete
//Linear Search
//Binary Search

class data_struc{
    public:
    int t_size; //used size of array;
    int u_size; //total array size;
    int *ptr;   //array pointer;
};

int create_array(data_struc *a, int x, int y){  //create array
    (*a).t_size = x;
    a->u_size = y;
    a->ptr = (int*) calloc(x, sizeof(int));
    
    return 0;
}


int set_value(data_struc *x, int *y){   //set array value
    int a = 0;
    
    for(int i=0; i<*y; i++)
    {
        a += *y;
        (x->ptr)[i] = a;
    }
    
    return 0;
}

void show_value(data_struc *a, int *y){     //show array data
    
    for(int i=0; i<*y; i++)
    cout<<a->ptr[i]<<" ";
}

int array_insert(data_struc *arr, int *u_size, int value, int position){    //array insert in ith pos
    
    for(int i=*u_size-1; i>=position; i--){
        (arr->ptr)[i+1] = (arr->ptr)[i];
    }
    
    (arr->ptr)[position] = value;
    
    ++(*u_size);
    
    return 0;
}

int array_delete(data_struc *arr, int *u_size, int position){   //delete ith pos value
    
    for(int i = position; i<*u_size; i++){
        (arr->ptr)[i] = (arr->ptr)[i+1];
    }
    --(*u_size);
    
    return 0;
}

int linear_search(data_struc *arr, int u_s, int value){     //Linear Search
    for(int i=0; i<u_s; i++)
    {
        if((arr->ptr)[i] == value)
        {
            return value;
        }
    }
    return 0;
}

int binary_search(data_struc *arr, int u_s, int value){     //Binary Search
    
    int low, last, mid;
    low = 0, last = u_s-1;
    
    while(last>=low)
    {
        mid = (last+low)/2;
        
        if((arr->ptr)[mid] == value){
            return value;
        }
        else if((arr->ptr)[mid] > value){
            last = mid-1;
        }
        else if((arr->ptr)[mid] < value){
            low = mid+1;
        }
    }
    
    return -1;
}

int main()
{
    data_struc marks;
    
    int t_s = 50, u_s = 20;
    int insert_value = 7, insert_position = 2;  //insert value and position
    
    create_array(&marks, t_s, u_s);
    set_value(&marks, &u_s);
    
    cout<<"After Insert a Value: ";
    array_insert(&marks, &u_s, insert_value, insert_position);
    show_value(&marks, &u_s);
    
    cout<<endl<<"After Delete Value: ";
    array_delete(&marks, &u_s, insert_position);
    show_value(&marks, &u_s);
    
    cout<<endl<<"Linear Search: "<<linear_search(&marks, u_s, 20);
    cout<<endl<<"Binary Search: "<<binary_search(&marks, u_s, 240);
    
    
    
    free(marks.ptr);
    return 0;
}
