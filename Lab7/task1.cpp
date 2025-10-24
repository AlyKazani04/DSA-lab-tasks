#include <iostream>
using namespace std;

struct destination
{
    string name;
    int eta;

    destination(int e, string n) : eta(e), name(n) {}
};

class DeliveryLogistics
{
    private:
        destination* arr;
        int size;
    public:
        DeliveryLogistics(destination* list, int s) : arr(list), size(s) {}
        ~DeliveryLogistics() =default;


};

int main()
{
    destination list[] = {
        { 120, "Store B" },
        {  90, "Store A" },
        {  45, "Store C" },
        { 150, "Store D" }
    }; 

    DeliveryLogistics(&list, 4);
    return 0;
}