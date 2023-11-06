//1845. Seat Reservation Manager


class SeatManager {
public:
    set<int> seats;
    SeatManager(int n) {
        for(int i=1;i<=n;i++) seats.insert(i);
    }

    int reserve() { 
        int emp = *seats.begin();
        seats.erase(emp);
        return emp;

    }

    void unreserve(int seatNumber) {
        seats.insert(seatNumber);
    }

    /*
    //time limit exceeds
    map<int,bool> seats;
    SeatManager(int n) {
       for (int i = 1; i <= n; i++) {
            seats[i] = false;
        }        
    }
    
    int reserve() {        
        for(auto &emp:seats){
            //cout<<"f:"<<emp.first<<"s:"<<emp.second<<endl;
            if(emp.second == false) {
                //cout<<"emp.first"<<emp.first<<endl;
                emp.second = 1;
                return emp.first;
            }

        }
        return -1;
    }
    
    void unreserve(int seatNumber) {

        seats[seatNumber]= false;
    }
    */
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */