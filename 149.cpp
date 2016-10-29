/**
 Max Points on a Line

 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int i,j,k,count;
        int ma=0;
        double z,x,y;
        map <double,int> m;
        int l=points.size();
        if(l<3) return l;
        for(i=0; i < l-1 ; i++){
            vector <int> v(l,0);
            m.clear();
            count=2;
            for(j=i+1; j < l ; j++){
                y= points[i].y - points[j].y;
                x= points[i].x - points[j].x;
                
                if( points[i].y == points[j].y && points[i].x == points[j].x){
                    for(k=0; k < l; k++){
                        if(v[k]<1) v[k]=2;
                        else v[k]++;
                    }
                }
                else if(y==0.0){
                    if(v[0]<1){
                        v[0]=2;
                    }
                    else v[0]++;
                }
                else if(x==0.0){
                    if(v[1]<1){
                        v[1]=2;
                    }
                    else v[1]++;
                }
                else{
                    z=y/x;
                    if(m[z]==0){
                        m[z]=count;
                        if(v[count]<2) v[count]=2;
                        else v[count]++;    
                        count++;
                    }
                    else{
                        v[m[z]]++;
                    }
              }
                
            }
            for(j=0;j<l;j++){
                ma=max(ma,v[j]);
            }
        }
        return ma;
    }
};