// Write a program in c to describe fifo function
// creat a function that insert a variable (int) to queue and return the old value
// order = 0 => do nothing
// order = 1 => insert to queue
// order = 2 => out value from queue
#include <stdio.h>


// Creat function
int FIFO_func(int order, int value){
    int q[10];
    int max_array = 9;
    int min_array = 0;
    int cnt = 0;
    int pnt_out,pnt_in = 0;

    if(order==1){
        if(pnt_in <= max_array){
            q[pnt_in] = value;
            if(cnt < max_array){
                cnt++;
            }
            pnt_in++;
        }else {
            pnt_in = 0;

        }
    }  
    if( order == 2){
        if(cnt >0){
            return q[pnt_out];
            q[pnt_out] = 0;
            cnt--;
        }
        if(pnt_out < max_array){
            pnt_out++;
        }else{
            pnt_out = min_array;
        }
    }
    if(cnt>=max_array){
        pnt_in = pnt_out;
    }
    
}

int main(){

    int fun_return;
    fun_return = FIFO_func(2,3);
    printf("function return !! %d",fun_return);
    return 0;
}