class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> cars;
        for(int i = 0; i < position.size(); i++) {
            double t = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], t});
        }
        sort(cars.rbegin(), cars.rend());
        double maxTime = 0;
        int fleet_count = 0;
        for(auto car : cars){
            double t = car.second;
            if(t > maxTime)
            {
                fleet_count++;
                maxTime = t;
            }
        }
        return fleet_count;
        
    }
};
