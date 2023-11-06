#include <glut.h>
float newCircleY = 22.0f;
float x = 0.0;
float angley = 0.0;
GLUquadric* quadric;
float circleRadius = 26.0f;  // Change this to your desired radius
int circleSlices = 50;  // Change this as needed
float circleX = 75.0f;  // X-coordinate of the center
float circleY = 210.0f;  // Y-coordinate of the center
GLUquadric* quadric2;
float circleX2 = 250.0f;  // X-coordinate of the center
int screenWidth = 800;
float carWidth = 300.0f;  // Width of the car
float carSpeed = 0.2; // Initial car speed
float gap = 5.0f;  // Gap between the cars
// Function to check collision between two cars
bool isCollision = false;
void checkCollision() {
    if (!isCollision) {
        // Check if the car is within the collision area
        if (x + carWidth >= 300 && x <= 1000 && angley >= 200 && angley <= 300) {
            isCollision = true;
            x -= 10.0; // Move back along the x-axis by -10 units
        }
    }
    if (x <= carWidth - 200 && angley <= -85) {
        isCollision = true;
        angley += 10.0;
    }


    else {
        isCollision = false;
    }
}
void specFunc(int key, int x, int y) {
    switch (key) {

    case GLUT_KEY_UP:
        if (angley < 50) {  // Check if the car is not at the top boundary
            angley += 5;
        }
        else
        {
            angley -= 8;
        }
        break;
    case GLUT_KEY_DOWN:
        if (angley >= -175) { // Check if the car is not at the bottom boundary
            angley -= 5;
        }
        else
        {
            angley += 8;
        }
        break;
    case GLUT_KEY_RIGHT:
        carSpeed += 0.1; // Increase the car's speed when the up arrow key is pressed
        break;

    case GLUT_KEY_LEFT:
        if (carSpeed > 0.4) { // Compare with a threshold value
            carSpeed -= 0.1;
            x -= 3;
            // Decrease the car's speed when the down arrow key is pressed
        }
        break;
        // Add more cases for other keys if needed

    default:
        break;
    }
    glutPostRedisplay();
}

// Function to render graphics
void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);

    glColor3f(0.05f, 0.63f, 0.91f);
    glVertex2i(0, 800);          // Bottom-left corner
    glVertex2i(800, 800);        // Bottom-right corner
    glVertex2i(800, 350);      // Top-right corner
    glVertex2i(0, 350);        // Top-left corner
    glEnd();
    glBegin(GL_QUADS);
    // Road
    glColor3f(0.2f, 0.2f, 0.2f);
    glVertex2i(0, 0);          // Bottom-left corner
    glVertex2i(800, 0);        // Bottom-right corner
    glVertex2i(800, 350);      // Top-right corner
    glVertex2i(0, 350);        // Top-left corner
    glEnd();




    // house
    glPushMatrix();
    glTranslatef(-x, 0, 0);
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(-540, 180);
    glVertex2i(-440, 180);
    glVertex2i(-440, 140);
    glVertex2i(-540, 140);
    glEnd(); glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(-360, 180);
    glVertex2i(-260, 180);
    glVertex2i(-260, 140);
    glVertex2i(-360, 140);
    glEnd(); glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(-180, 180);
    glVertex2i(-80, 180);
    glVertex2i(-80, 140);
    glVertex2i(-180, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(980, 180);
    glVertex2i(1080, 180);
    glVertex2i(1080, 140);
    glVertex2i(980, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(1160, 180);
    glVertex2i(1260, 180);
    glVertex2i(1260, 140);
    glVertex2i(1160, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(1340, 180);
    glVertex2i(1440, 180);
    glVertex2i(1440, 140);
    glVertex2i(1340, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(1540, 180);
    glVertex2i(1640, 180);
    glVertex2i(1640, 140);
    glVertex2i(1540, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(1720, 180);
    glVertex2i(1800, 180);
    glVertex2i(1800, 140);
    glVertex2i(1720, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(800, 180);
    glVertex2i(900, 180);
    glVertex2i(900, 140);
    glVertex2i(800, 140);
    glEnd();
    glBegin(GL_QUADS);
    // اسفلت
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(680, 180);
    glVertex2i(780, 180);
    glVertex2i(780, 140);
    glVertex2i(680, 140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(500, 180);
    glVertex2i(600, 180);
    glVertex2i(600, 140);
    glVertex2i(500, 140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(320, 180);
    glVertex2i(420, 180);
    glVertex2i(420, 140);
    glVertex2i(320, 140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(140, 180);
    glVertex2i(240, 180);
    glVertex2i(240, 140);
    glVertex2i(140, 140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(0, 180);
    glVertex2i(60, 180);
    glVertex2i(60, 140);
    glVertex2i(0, 140);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(650, 700);
    glVertex2f(800, 600);
    glVertex2f(500, 600);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.42f, 0.07f, 0.47f);
    glVertex2i(530, 600);
    glVertex2i(770, 600);
    glVertex2i(770, 350);
    glVertex2i(530, 350);
    glEnd();

    // not important 
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.21f, 0.70f);
    glVertex2i(650, 280);

    glVertex2i(700, 235);

    glVertex2i(600, 235);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.21f, 0.70f);


    glVertex2i(600, 265);

    glVertex2i(700, 265);

    glVertex2i(650, 215);

    glEnd();
    // door
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(600, 500);
    glVertex2i(700, 500);
    glVertex2i(700, 350);
    glVertex2i(600, 350);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(600, 500);
    glVertex2i(660, 460);
    glVertex2i(660, 380);
    glVertex2i(600, 350);
    glEnd();
    // coll
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(950, 300);
    glVertex2i(1000, 280);
    glVertex2i(1000, 230);
    glVertex2i(950, 200);
    glVertex2i(900, 260);
    glEnd();
    glPopMatrix();
    // car animation
    glPushMatrix();
    glTranslatef(x, angley, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.58f, 0.20f);
    glVertex3f(0.0f, 220.0f, 0.0f);

    glVertex3f(300.0f, 220.0f, 0.0f);
    glVertex3f(300.0f, 260.0f, 0.0f);
    glVertex3f(240.0f, 260.0f, 0.0f);
    glVertex3f(200.0f, 300.0f, 0.0f);
    glVertex3f(100.0f, 300.0f, 0.0f);
    glVertex3f(60.0f, 260.0f, 0.0f);
    glVertex3f(0.0f, 260.0f, 0.0f);
    glEnd();
    // first wheel
    quadric = gluNewQuadric();
    glColor3f(0.0f, 0.0f, 0.0f);  // Circle color (black in this case)
    glPushMatrix();
    glTranslatef(circleX, circleY, 0.0);
    gluDisk(quadric, 0, circleRadius, circleSlices, 1);
    glPopMatrix();
    //second wheel
    quadric2 = gluNewQuadric();
    glColor3f(0.0f, 0.0f, 0.0f);  // Circle color (white in this case)
    glPushMatrix();
    glTranslatef(circleX2, circleY, 0.0);
    gluDisk(quadric2, 0, circleRadius, circleSlices, 1);
    glPopMatrix();
    // windows 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(100, 280);
    glVertex2i(140, 280);
    glVertex2i(140, 250);
    glVertex2i(100, 250);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(160, 280);
    glVertex2i(200, 280);
    glVertex2i(200, 250);
    glVertex2i(160, 250);
    glEnd();
    glPopMatrix();
    // end of first car
    // control car 

    glBegin(GL_POLYGON);
    glColor3f(0.98f, 0.58f, 0.20f);
    glVertex3f(0.0f, 20.0f, 0.0f);
    glVertex3f(300.0f, 20.0f, 0.0f);
    glVertex3f(300.0f, 60.0f, 0.0f);
    glVertex3f(240.0f, 60.0f, 0.0f);
    glVertex3f(200.0f, 100.0f, 0.0f);
    glVertex3f(100.0f, 100.0f, 0.0f);
    glVertex3f(60.0f, 60.0f, 0.0f);
    glVertex3f(0.0f, 60.0f, 0.0f);
    glEnd();
    // wheels 
    quadric = gluNewQuadric();
    glColor3f(0.0f, 0.0f, 0.0f);  // Circle color (black in this case)
    glPushMatrix();
    glTranslatef(circleX, newCircleY, 0.0);
    gluDisk(quadric, 0, circleRadius, circleSlices, 1);
    glPopMatrix();
    // second wheel
    quadric = gluNewQuadric();
    glColor3f(0.0f, 0.0f, 0.0f);  // Circle color (black in this case)
    glPushMatrix();
    glTranslatef(circleX2, newCircleY, 0.0);
    gluDisk(quadric, 0, circleRadius, circleSlices, 1);
    glPopMatrix();

    //window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(100, 80);
    glVertex2i(140, 80);
    glVertex2i(140, 50);
    glVertex2i(100, 50);
    glEnd();
    //window
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(160, 80);
    glVertex2i(200, 80);
    glVertex2i(200, 50);
    glVertex2i(160, 50);
    glEnd();


    checkCollision();

    glFlush();
}


void update(int value) {
    if (!isCollision) {
        x += carSpeed;
    }

    if (x >= screenWidth) {
        x = -carWidth;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update, 0); // Set the timer function to continuously update the animation
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(300, 20);
    glutCreateWindow("ROAD");
    glutDisplayFunc(display);
    glutTimerFunc(10, update, 0); // Start the animation
    glutSpecialFunc(specFunc);

    // Set the display mode and 2D orthographic projection
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    gluOrtho2D(0.0, 800, 0.0, 800);
    glutMainLoop();
    return 0;
}