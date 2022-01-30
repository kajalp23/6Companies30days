class Solution {
public:
    double r,x,y;
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        x=x_center;
        y=y_center;
    }
    
    vector<double> randPoint() {
        vector<double>ans;
        double ang = (double)rand() / RAND_MAX*2*M_PI,
        hyp = sqrt((double)rand() / RAND_MAX) * r,
        adj = cos(ang) * hyp,
        opp = sin(ang) * hyp;
        ans.push_back(x+adj);
        ans.push_back(y+opp);
        return ans;
        
    }
};
