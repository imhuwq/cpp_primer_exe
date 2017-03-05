#include <iostream>
#include <string>

using namespace std;

struct SalesData {
    string bookNo;
    unsigned unitsSold;
    double revenue;
};

void GetData(SalesData *data1, SalesData *data2) {
    double price = 0;

    cout << "Please enter bookNo, units sold and unit price." << endl;
    cin >> data1->bookNo >> data1->unitsSold >> price;
    data1->revenue = data1->unitsSold * price;

    cout << "Please enter bookNo, units sold and unit price." << endl;
    cin >> data2->bookNo >> data2->unitsSold >> price;
    data2->revenue = data2->unitsSold * price;

}

int CalculateSum(SalesData data1, SalesData data2) {
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.unitsSold + data2.unitsSold;
        double totalRevenue = data1.revenue + data2.revenue;

        if (totalCnt != 0) {
            cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " << totalRevenue/ totalCnt << " " << endl;
        } else {
            cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " " << "(no sales)" << endl;
        }

        return 0;
    } else {
        cerr << "Data must refer to thr same ISBN" << endl;
        return -1;
    }
}

int main() {

    SalesData data1, data2;
    GetData(&data1, &data2);

    return CalculateSum(data1, data2);
}