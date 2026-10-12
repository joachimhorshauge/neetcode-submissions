class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        stack<double> st;
        for (int i = 0; i < position.size(); i++) {
            pair<int, int> car{position[i], speed[i]};
            cars.push_back(car);
        }
        // sort descending by position
        sort(cars.begin(), cars.end(), [](
            const pair<int, int> &a, 
            const pair<int, int> &b) { 
                return a.first > b.first; 
            });
        
        for (int i = 0; i < cars.size(); i++) {
            double sp = (target - cars[i].first) / double(cars[i].second);
            if (st.empty() || sp > st.top()) {
                st.push(sp);
            }
        }


        return st.size();
    }
};
