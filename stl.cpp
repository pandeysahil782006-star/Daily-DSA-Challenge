#include <bits/stdc++.h>
using namespace std;


//pair
void explainPair(){
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second;

    pair<int, pair<int,int>> p2 = {1,{3,4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;

    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};

    cout << arr[1].second;
}

//vector
void explainVector(){


    vector<int> v;         //{}

    v.push_back(1);      //{1}
    v.emplace_back(2);  //{1,2}

    vector<pair<int, int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    
    it++;
    cout << *(it) << " ";

    it= it + 2;
    cout<< *(it)<< " ";

    vector<int>::iterator it = v.end();

    cout << v[0] << " " ;

    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        cout << *(it) << " ";

    }
    for (auto it = v.begin(); it!= v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }

    //erase

    //{10,12,13,14}
    v.erase(v.begin()+1); //{10,13,14};

    //{10,20,30,40,50}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,40,50} [start,end)

    //insert function

    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    //{10,20}
    cout << v.size(); //2
    v.pop_back(); //{10}

    //v1 = {10,20}
    //v2 = {30,40}

    v1.swap(v2); // v1 = {30,40}, v2 = {10,20}

    v.clear(); //erases the entire vector

    cout << v.empty(); 
}

//list
void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4}

    ls.emplace_front();

    //rest functions are same as vector begin,end,clear,size
}

//Deque
void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();

    //rest functions same as vector
}

//Stack LIFO(last in first out)
void explainStack(){
    stack<int>st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout << st.top(); //print 5 "** st[2] is invalid **"

    st.pop(); //st looks like {3,3,2,1}
    cout << st.top(); //3
    cout << st.size(); //4
    cout << st.empty(); //false

    stack<int>st1, st2;
    st1.swap(st2);
}

//Queue FIFO(first in first out)
void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{2}
    q.emplace(4); //{1,2,4}

    q.back()+=5; //4 become 9
    cout << q.back();  //9
    
    //Q is {1,2,9}
    cout << q.front(); //prints 1

    q.pop(); //{2,9}

    cout << q.front(); //prints2

    //size swap empty same as stack
}

//Priority Queue
void explainPQ(){

    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); //prints 10

    pq.pop(); //{8,5,2}

    cout << pq.top(); //prints 8

    //size swap empty function same as others

    //Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout << pq.top(); //prints 2

}

//set
void explainSet(){
    set<int>st;
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //functionality of insert in vector
    // can  be used also, that only increase
    // effiiciency

    //begin(), end(), rbegin(), rend(), size(),empty(), and swap() are same as those of the above

    //{1,2,3,4,5}
    auto it = st.find(3);

    // {1,2,3,4,5}
    auto it = st.find(6); //returns set.end()

    //{1,4,5}
    st.erase(5);  //erases 5 , takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); //it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);    //after erase {1,4,5}    [first,last)
    // lower_bound and upper_bound() function works in the same way as in vector it does.

    //this is the syntax

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiset(){
    //everything is same as set
    //only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1);  //all 1's erased

    int cnt = ms.count(1); //counts no of 1

    //only a siingle one erased
    ms.erase(ms.find(1));


    ms.erase(ms.find(1)), ms.find(1+2);

    //rest all functions are same as set
}

void explainUSet(){
    unordered_set<int> st;
    // lower_bound and upper_bound functions does not works,
    // rest all functions are same as above,
    // it does not store any particular order is has a better complecity
    // than set in most cases, except some wen collision happens
}

//map
void explainMap(){
   //map stores unique key in sorted order,similar to set data structures
    map<int, int> mpp;
    
    map<int, pair<int, int>> mpp;

    map< pair<int, int>, int> mpp;

    mpp[1]= 2;  //{1,2}
    mpp.emplace(3, 1);  //{3,1}

    mpp.insert({2,4});
    
  // mpp[make_pair(2, 3)] = 10;  //{{2,3},10}

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << (*it).second;

    auto it = mpp.find(5);

    //this is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty are same as above
}

void explainMultimap(){
    //everything as same as map, only it can store multiple keys
}

