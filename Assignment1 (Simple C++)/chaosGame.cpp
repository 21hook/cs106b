#include <iostream>
#include <cmath>
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
#include "random.h" // for randomInteger
#include "gevents.h"


using namespace std;

const int WIDTH = 800;
const int HEIGHT = 600;

int main() {

    GWindow window(WIDTH, HEIGHT);
    GPoint currentPoint;


    window.setColor("White");
    window.clear();
    window.setWindowTitle("Chaos Game");
    window.setColor("Black");

    // 3 random points
    Vector<GPoint> triangle;

    /*Event Listeners -> Event Type -> Handle Event(method)*/
    while(true) {// event listeners
        GMouseEvent e = waitForClick(); // mouse event
        triangle.add(GPoint(e.getX(), e.getY()));
        if(triangle.size() == 3) break;
    }

    currentPoint = triangle.get(randomInteger(0, 2));

    window.drawLine(triangle.get(0), triangle.get(1));
    window.drawLine(triangle.get(1), triangle.get(2));
    window.drawLine(triangle.get(2), triangle.get(0));


    for(int i=0; i<10000; i++) {

        // a filled circle around the current point  以...为中心；周围
        window.drawOval(currentPoint.getX(),currentPoint.getY(), 5, 5);

        //a random vertex
        GPoint vertex = triangle.get(randomInteger(0, 2)); // radom vertex

        currentPoint = GPoint((vertex.getX() + currentPoint.getX()) /2, (vertex.getY() + currentPoint.getY()) /2);
    }


    window.setVisible(true);


    window.requestFocus();
    pause(3000);

    getLine("Press [Enter] to close the window... ");
    window.requestFocus();
    window.close();
    exitGraphics();

    cout << endl << "Program completed." << endl;

    return 0;
}
