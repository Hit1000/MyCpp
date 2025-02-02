#include<bits/stdc++.h>
using namespace std;
    /*
    in open hashing we make a hash function on size of arr and place over element here and 
    when slot of the element is full we give him next place to stay 
    so we have to find if element is at hash place or next place 
    it is made of circular loop so after (n-1) it goes to (0)
    */
    class myhash{
        public:
        int *arr; 
        int size;
        int cap;

        myhash(int cap){
            this->cap = cap;
            arr = new int[cap];
            size = 0;
            for (int i = 0; i < cap; i++)
            {
                arr[i] = -1;
            }
        }

        int hash(int key){
            return key%cap;
        }

        bool search(int key){
            int index = hash(key);
            int i = index;
            while(arr[i] != -1){
                if(arr[i] == key){
                    return true;
                }
                i = (i+1)%cap;
                if(arr[i] == index){
                    return false;
                }
            }
            return false;
        }

        bool insert(int key){
            if(size == cap){
                return false;
            }
            int i = hash(key);
            while(arr[i] != -1 && arr[i] != -2 && arr[i] != key){
                i = (i+1)%cap;
            }
            if(arr[i] == key){
                return false;
            }
            else{
                arr[i] = key;
                size++;
                return true;
            }
        }

        bool erase(int key){
            int h = hash(key);
            int i = h;
            while(arr[i] != -1){
                if(arr[i] == key){
                    arr[i] == -2;
                    return true;
                }
                i = (i+1)%cap;
                if(i == h){
                    return false;
                }
            }
            return false;
        }

    };
    
    
int main(){
    
    
    
    
    return 0;
}