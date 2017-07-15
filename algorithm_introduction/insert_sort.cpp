#include<iostream>
#include<vector>
using namespace std;

void insert_sort(vector<int> &data) {
    int i;
    for (i = 1; i < data.size(); i++) {
        int j = i - 1;
        int key = data[i];
        //注意此处是大于key，而不是大于data[i] !
        while (data[j] > key && j > 0) {
            data[j + 1] = data[j];
            j --;
        }
        data[j + 1] = key; 
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> data;
    for (int i = 0; i < n; i++) {
        int temp;
        cin>>temp;
        data.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cout<<data[i]<<"  ";
    }
    cout<<endl;
    insert_sort(data);
    for (int i = 0; i < n; i++) {
        cout<<data[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
