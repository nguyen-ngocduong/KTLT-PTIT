#include<bits/stdc++.h>
using namespace std;
class Point {
private : 
    double x,y;
public :
    Point(){ // khởi tạo giá trị tại gốc tọa độ
        this->x=0;
        this->y=0;
    }
    Point(double x, double y){
        this->x=x;
        this->y=y;
    }
    // copy constructor
    Point(const Point &p) {
        this->x=p.x;
        this->y=p.y;
    }
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    double distance(const Point &p) {
        return sqrt(pow(x - p.getX(), 2) + pow(y - p.getY(), 2));
    }
};

int main () {
    int n; cin>>n;
    vector<Point> points;
    for(int i = 0; i<n; i++) {
        double x,y;
        cin >> x >> y;
        points.push_back(Point(x,y));
    }
    cout << fixed << setprecision(2);
    for(int i = 0; i<n; i++) {
        for(int j = 0; j < n; j++) {
            cout << points[i].distance(points[j]);
            if(j < n-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}