#include &lt;iostream&gt;
using namespace std;
class Point {
private:
int x;
int y;
public:
Point(int xValue, int yValue) : x(xValue), y(yValue) {}
void getCords() {
cout&lt;&lt;&quot;X-cordinate: &quot;&lt;&lt;x&lt;&lt;endl;
cout&lt;&lt;&quot;Y-cordinate: &quot;&lt;&lt;y&lt;&lt;endl;
}
};
int main() {
Point p(39, 245);
p.getCords();
return 0;
}