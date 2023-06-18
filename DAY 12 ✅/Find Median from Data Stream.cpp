#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, 
        less<pair<int,int>>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set_pair;
  
class MedianFinder {
public:
    ordered_set_pair st;
    int a=0;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        //insert pair to store duplicate value in Ordered Set
        st.insert({num,a++});
    }
   
    double findMedian() { 
        int n=st.size();
        auto itr = st.find_by_order(n/2); 
        double num= (*itr).first;
        if(n%2==0){
            auto itr2=st.find_by_order((n-1)/2);
            double num1=(*itr2).first;
            num=(num+num1)/2;
        }
        return num;
        
    }
};








