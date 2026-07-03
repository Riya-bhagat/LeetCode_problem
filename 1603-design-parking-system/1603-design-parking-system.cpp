class ParkingSystem {
public:
int big_car;
    int medium_car;
    int small_car;
    ParkingSystem(int big, int medium, int small) {
          big_car=big;
          medium_car=medium;
          small_car = small;
    }
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(big_car>0){
                    big_car--;
                    return true;
                } 
                return false;
             case 2:
                if(medium_car>0){
                    medium_car--;
                    return true;
                }
                return false;
             case 3:
                if(small_car>0){
                    small_car--;
                    return true;
                }
                return false;
            default:
                return false;
        }
        }     
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */