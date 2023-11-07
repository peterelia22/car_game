#include <glut.h>
float newCircleY = 22.0f;
float x = 0.0;
float angley = 0.0;
GLUquadric* quadric;
float circleRadius = 26.0f;  
int circleSlices = 50;  
float circleX = 75.0f;  
float circleY = 210.0f;  
GLUquadric* quadric2;
float circleX2 = 250.0f;  
int screenWidth = 800;
float carWidth = 300.0f;  
float carSpeed = 0.1; 
// Function to check collision between two cars
bool isCollision = false;
void checkCollision() {
    if (x >= 300 && angley>=-10) {
        isCollision = true;
        x -= 10;
        
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
        carSpeed += 0.1; 
        break;

    case GLUT_KEY_LEFT:
        if (carSpeed > -0.4 && x > 0) { // Compare with a threshold value for maximum backward speed
            carSpeed -= 0.3;  // Decrease the car's speed
         
        }
        break;
    default:
        break;
    }
    glutPostRedisplay();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);

    glColor3f(1.00f, 1.0f, 1.0f);
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
    //flag
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(800, 700);
    glVertex2i(1600, 700);
    glVertex2i(1600, 600);
    glVertex2i(800, 600);
    glEnd();
    glBegin(GL_QUADS);
    //flag
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(800, 600);
    glVertex2i(1600, 600);
    glVertex2i(1600, 500);
    glVertex2i(800, 500);
    glEnd();
    //flag
    glBegin(GL_QUADS);
    glColor3f(0.04f, 0.47f, 0.24f);
    glVertex2i(800, 500);
    glVertex2i(1600, 500);
    glVertex2i(1600, 400);
    glVertex2i(800, 400);
    glEnd();
    glBegin(GL_TRIANGLES);

    glColor3f(0.80f, 0.13f, 0.16f);
    glVertex2i(800, 700);

    glVertex2i(1100, 550);

    glVertex2i(800, 400);

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

    glColor3f(0.03f, 0.24f, 0.73f);
    glVertex2i(1350, 100);

    glVertex2i(1400, 40);

    glVertex2i(1300, 40);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.03f, 0.24f, 0.73f);


    glVertex2i(1350, 20);

    glVertex2i(1400, 80);

    glVertex2i(1300, 80);

    glEnd();
    // not important 
    glBegin(GL_TRIANGLES);

    glColor3f(0.03f, 0.24f, 0.73f);
    glVertex2i(440, 320);

    glVertex2i(500, 240);

    glVertex2i(380, 240);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.03f, 0.24f, 0.73f);


    glVertex2i(440, 220);

    glVertex2i(500, 300);

    glVertex2i(380, 300);

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
    glColor3f(0.0f, 0.0f,0.0f);
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
    glColor3f(0.80f, 0.13f, 0.16f);
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
        x += carSpeed; //responsiple for move the car
    }

   if (x >= screenWidth) {
       x = -carWidth;
       // repeat screen
  }

    if (x < 0) {
        x = 5; // Move the car forward by 5 units if it tries to exit the screen from the left
    }

    glutPostRedisplay();
    glutTimerFunc(10, update, 0); // Set the timer function to continuously update the animation
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(300, 20);
    glutCreateWindow("FREE PALESTINE");
    glutDisplayFunc(display);
    glutTimerFunc(10, update, 0); // Start the animation
    glutSpecialFunc(specFunc);

    // Set the display mode and 2D orthographic projection
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    gluOrtho2D(0.0, 800, 0.0, 800);
    glutMainLoop();
    return 0;
}
