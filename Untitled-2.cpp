#include <iostream>
using namespace std;
class player {
    public:
    void movement(int x,int y){
        cin>>x >>y;
    }
    void damage (int t,int g){
        cin>>g>>t;
    }
};
int main(){
    player b;
    b.movement(10,12);
    b.damage(1,2);

}