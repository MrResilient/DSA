class ParkingSystem {
public:
    map<int, int> park;
    ParkingSystem(int big, int medium, int small) {
        park[1] = big;
        park[2] = medium;
        park[3] = small;
    }
    
    bool addCar(int ct) {
        if(ct == 1){
            if(park[1] > 0){
                park[1]--;
                return true;
            } else {
                return false;
            }
        } else if (ct == 2){
            if(park[2] > 0){
                park[2]--;
                return true;
            } else {
                return false;
            }
        } else if (ct == 3){
            if(park[3] > 0){
                park[3]--;
                return true;
            } else {
                return false;
            }
        }

        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */