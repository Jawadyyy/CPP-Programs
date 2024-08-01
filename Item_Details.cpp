#include <iostream>

using namespace std;

template <typename T>

class Entity
{
private:
    T itemnumber;
    T quantity;
    T cost;
    T totalcost;

public:
    Entity()
    {
        itemnumber = 0;
        quantity = 0;
        cost = 0;
        totalcost = 0;
    }
    Entity(T itemnumber, T quantity, T cost)
    {
        this->itemnumber = itemnumber;
        this->quantity = quantity;
        this->cost = cost;
    }

    ~Entity() {}

    void setItemNumber(T inu)
    {
        itemnumber = inu;
    }

    void setQuantity(T qua)
    {
        quantity = qua;
    }

    void setCost(T cos)
    {
        cost = cos;
    }

    void setTotalCost()
    {
        totalcost = quantity * cost;
    }

    T getItemNumber() const
    {
        return itemnumber;
    }

    T getQuantity() const
    {
        return quantity;
    }

    T getCost() const
    {
        return cost;
    }

    T getTotalCost() const
    {
        return totalcost;
    }
};

int main()
{
    int itemnum, quan;
    double expense;

    cout << "Enter the ItemNumber: "<<endl;
    cin >> itemnum;

    cout << "Enter the Quantity: "<<endl;
    cin >> quan;

    cout << "Enter the Cost of Item: "<<endl;
    cin >> expense;

    Entity<int> obj(itemnum, quan, expense);
    obj.setTotalCost();

    cout << "*****************PAYMENT SLIP***************************" << endl;
    cout << "The Item Number is: #" << obj.getItemNumber() << endl;
    cout << "The Quantity is: #" << obj.getQuantity() << endl;
    cout << "The Cost of the Item is: $" << obj.getCost() << endl;
    cout << "The Total Cost is: $" << obj.getTotalCost() << endl;

    return 0;
}
