//Protected Inheritance
/*                  public derivation        protected derivation           private derivation
private member         no heritance             no inheritance                no inheritance
protected member        protected                 protected                        private
public member            public                    protected                    private
*/
#include<iostream>
class Base{
    int a;
    protected:
    int b;
};
class Derive: protected Base{
    public:
    void setdata(){
    b=10;
    
    }
};
int main(){
    Derive d1;
   // d1.b=10  protected member cannot access directly but can inheritanced
   d1.setdata();
   return 0;
}
