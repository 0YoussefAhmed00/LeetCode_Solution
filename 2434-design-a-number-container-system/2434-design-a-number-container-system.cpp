#include <unordered_map>
#include <map>
#include <set>
using namespace std;
class NumberContainers {
public:
    unordered_map<int,int> indexN;
    map<int,set<int>>n_of_ind;
    NumberContainers() {

    }
    
    void change(int index, int number) {
          if (indexN.count(index)) {
            int oldNumber = indexN[index];
            if (oldNumber == number) return; 

          
            n_of_ind[oldNumber].erase(index);
            if (n_of_ind[oldNumber].empty()) {
                n_of_ind.erase(oldNumber); 
            }
        }

        indexN[index] = number;
        n_of_ind[number].insert(index);  
    
    }
    
    int find(int number) {
         if (n_of_ind.count(number) && !n_of_ind[number].empty()) {
            return *n_of_ind[number].begin(); 
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */