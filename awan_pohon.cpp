/*
 * GL01Hello.cpp: Test OpenGL C/C++ Setup
 */
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

void PohonKelapa(void){
   glClear(GL_COLOR_BUFFER_BIT); 
   
   //Gradasi Langit Senja
   glBegin(GL_POLYGON);
      glColor3ub(255,165,0);    glVertex2f(3.0, 3.0);
      glColor3ub(255,255,255);   glVertex2f(-1.7, 3.0);
      glColor3ub(255,255,255);   glVertex2f(3.0, 1.0);
   glEnd();
   
   //Gradasi Langit
   glBegin(GL_POLYGON);
      glColor3ub(0,206,209);           glVertex2f(-3.0, 3.0);
      glColor3ub(255,165,0);           glVertex2f(3.0, 3.0);
      glColor3ub(255,165,0);           glVertex2f(3.0, 2.5);
      glColor3ub(255,228,181);         glVertex2f(-3.0, 2.5);
   glEnd(); 
   
   //Matahari ketika Senja
   glBegin(GL_POLYGON);
      glColor3ub(255,165,0);           glVertex2f(3.0, 3.0);
      glColor3ub(255,248,220);         glVertex2f(2.7, 3.0);
      glColor3ub(255,248,220);         glVertex2f(3.0, 2.7);
   glEnd();
   
   //Burung (dari kanan ke kiri)
   glLineWidth(0.5);
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-0.1, 2.3);
      glColor3ub(139,139,131);         glVertex2f(0.0, 2.4);
      glColor3ub(255,255,240);         glVertex2f(0.1, 2.3);
      glColor3ub(255,255,240);         glVertex2f(0.0, 2.3);
      glColor3ub(139,139,131);         glVertex2f(0.1, 2.4);
      glColor3ub(139,139,131);         glVertex2f(0.2, 2.3);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-1.7, 2.1);
      glColor3ub(139,139,131);         glVertex2f(-1.6, 2.2);
      glColor3ub(255,255,240);         glVertex2f(-1.5, 2.1);
      glColor3ub(255,255,240);         glVertex2f(-1.6, 2.1);
      glColor3ub(139,139,131);         glVertex2f(-1.5, 2.2);
      glColor3ub(139,139,131);         glVertex2f(-1.4, 2.1);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-1.9, 2.3);
      glColor3ub(139,139,131);         glVertex2f(-1.8, 2.4);
      glColor3ub(255,255,240);         glVertex2f(-1.7, 2.3);
      glColor3ub(255,255,240);         glVertex2f(-1.8, 2.3);
      glColor3ub(139,139,131);         glVertex2f(-1.7, 2.4);
      glColor3ub(139,139,131);         glVertex2f(-1.6, 2.3);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,139,131);         glVertex2f(-2.4, 2.2);
      glColor3ub(139,139,131);         glVertex2f(-2.3, 2.3);
      glColor3ub(255,255,240);         glVertex2f(-2.2, 2.2);
      glColor3ub(255,255,240);         glVertex2f(-2.3, 2.2);
      glColor3ub(139,139,131);         glVertex2f(-2.2, 2.3);
      glColor3ub(139,139,131);         glVertex2f(-2.1, 2.2);
   glEnd();
   
   //Pesisir
   glBegin(GL_TRIANGLES);
      glColor3ub(255,255,255);   glVertex2f(-3.0, 0.0);
      glColor3ub(205,133,63);    glVertex2f(-3.0, -3.0);
      glColor3ub(255,255,255);   glVertex2f(3.0, -3.0);
   glEnd(); 
   
   //Air Laut
   glBegin(GL_TRIANGLES);
      glColor3ub(135,206,250);   glVertex2f(3.0, 0.3);
      glColor3ub(255,255,255);   glVertex2f(-2.8, 0.3);
      glColor3ub(255,255,255);   glVertex2f(3.0, -2.8);
   glEnd(); 
   
   //Garis Tepi Laut atas 
   glLineWidth(1);
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,137,137);   glVertex2f(-3.0, 0.3);
      glColor3ub(238,233,233);   glVertex2f(3.0, 0.3);
   glEnd();
   
    //Garis Tepi Laut
   glLineWidth(2);
   glBegin(GL_LINE_STRIP);
      glColor3ub(245,245,245);   glVertex2f(-3.0, 0.3);
      glColor3ub(238,233,233);   glVertex2f(-2.6, 0.2);
      glColor3ub(205,201,201);   glVertex2f(-1.8, -0.2);
      glColor3ub(0,0,0);         glVertex2f(-1.8, -0.3);
      glColor3ub(139,131,120);   glVertex2f(-1.9, -0.4);
      glColor3ub(0,0,0);         glVertex2f(-1.8, -0.5);
      glColor3ub(105,105,105);   glVertex2f(-1.2, -0.7);
      glColor3ub(105,105,105);   glVertex2f(-1.0, -0.8);
      glColor3ub(0,0,0);         glVertex2f(-0.1, -0.9);
      glColor3ub(0,0,0);         glVertex2f(0.0, -1.0);
      glColor3ub(105,105,105);   glVertex2f(-0.1, -1.1);
      glColor3ub(0,0,0);         glVertex2f(-0.3, -1.2);
      glColor3ub(0,0,0);         glVertex2f(-0.4, -1.3);
      glColor3ub(0,0,0);         glVertex2f(-0.1, -1.4);
      glColor3ub(105,105,105);   glVertex2f(1.0, -1.4);
      glColor3ub(0,0,0);         glVertex2f(1.1, -1.5);
      glColor3ub(105,105,105);   glVertex2f(1.0, -1.5);
      glColor3ub(0,0,0);         glVertex2f(0.8, -1.6);
      glColor3ub(105,105,105);   glVertex2f(1.1, -1.7);
      glColor3ub(0,0,0);         glVertex2f(1.6, -1.9);
      glColor3ub(0,0,0);         glVertex2f(3.0, -2.8);
   glEnd();
   
   //Batang Kelapa
   glBegin(GL_POLYGON);
      glColor3ub(0,0,0);         glVertex2f(-1.6, -1.7);
      glColor3ub(222, 133, 63);  glVertex2f(-1.5, -1.5);
      glColor3ub(210, 105, 30);  glVertex2f(-1.4, -1.2);
      glColor3ub(255, 222, 173); glVertex2f(-1.3, -0.9);
      glColor3ub(205,133,63);    glVertex2f(-1.2, -0.7);
      glColor3ub(205, 133, 63);  glVertex2f(-1.1, -0.5);
      glColor3ub(222, 184, 135); glVertex2f(-0.8, 0.0);
      glColor3ub(205,133,63);    glVertex2f(-0.6, 0.2);
      glColor3ub(210, 105, 30);  glVertex2f(-0.7, -0.1);
      glColor3ub(255, 222, 173); glVertex2f(-0.8, -0.3);
      glColor3ub(205,133,63);    glVertex2f(-0.9, -0.5);
      glColor3ub(160, 82, 45);   glVertex2f(-1.0, -0.7);
      glColor3ub(205, 133, 63);  glVertex2f(-1.1, -1.0);
      glColor3ub(210, 105, 30);  glVertex2f(-1.2, -1.4);      
      glColor3ub(0,0,0);         glVertex2f(-1.1, -1.7);      
   glEnd();
   
   //Daun Kelapa kanan bawah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(107,142,35);    glVertex2f(-0.4, 0.0);
      glColor3ub(107,142,35);    glVertex2f(-0.4, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-0.5, -0.3);
      glColor3ub(154,205,50);    glVertex2f(-0.6, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-0.8, -0.7);
      glColor3ub(154,205,50);    glVertex2f(-0.7, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-0.8, -0.5);
      glColor3ub(124,252,0);     glVertex2f(-0.7, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-0.5, 0.1);
   glEnd();
   
   //Daun Kelapa kanan bawah2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(107,142,35);    glVertex2f(-0.4, 0.3);
      glColor3ub(107,142,35);    glVertex2f(0.0, 0.2);
      glColor3ub(107,142,35);    glVertex2f(0.1, 0.0);
      glColor3ub(154,205,50);    glVertex2f(0.2, -0.3);
      glColor3ub(107,142,35);    glVertex2f(0.2, -0.4);
      glColor3ub(154,205,50);    glVertex2f(-0.1, -0.2);
      glColor3ub(107,142,35);    glVertex2f(0.0, -0.1);
      glColor3ub(124,252,0);     glVertex2f(-0.3, 0.0);
      glColor3ub(107,142,35);    glVertex2f(-0.2, 0.1);
   glEnd();
   
   
    //Daun Kelapa tengah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(124,252,0);     glVertex2f(-0.5, 0.5);
      glColor3ub(255,255,224);   glVertex2f(-0.4, 1.0);
      glColor3ub(173,255,47);    glVertex2f(-0.4, 0.5);
      glColor3ub(250,250,210);   glVertex2f(-0.1, 0.9);
      glColor3ub(173,255,47);    glVertex2f(-0.3, 0.4);
   glEnd();
   
   //Daun Kelapa kiri
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(173,255,47);    glVertex2f(-0.8, 0.3);
      glColor3ub(255,255,224);   glVertex2f(-0.9, 0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.1, 0.2);
      glColor3ub(173,255,47);    glVertex2f(-1.1, 0.0);
      glColor3ub(173,255,47);    glVertex2f(-1.2, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-1.1, -0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.3, -0.7);
      glColor3ub(173,255,47);    glVertex2f(-1.1, -0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.0, -0.3);
      glColor3ub(107,142,35);    glVertex2f(-1.0, -0.1);
      glColor3ub(173,255,47);    glVertex2f(-0.9, -0.1);
      glColor3ub(107,142,35);    glVertex2f(-0.9, 0.1);
   glEnd();
   
   //Daun kiri2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
      glColor3ub(173,255,47);    glVertex2f(-0.7, 0.4);
      glColor3ub(255,255,224);   glVertex2f(-0.9, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.0, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.3, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.4, 0.5);
      glColor3ub(107,142,35);    glVertex2f(-1.5, 0.3);
      glColor3ub(173,255,47);    glVertex2f(-1.3, 0.4);
      glColor3ub(173,255,47);    glVertex2f(-1.2, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-1.0, 0.6);
      glColor3ub(107,142,35);    glVertex2f(-1.0, 0.5);
      glColor3ub(173,255,47);    glVertex2f(-0.8, 0.5);
      glColor3ub(107,142,35);    glVertex2f(-0.8, 0.4);
      glColor3ub(107,142,35);    glVertex2f(-0.6, 0.2);
   glEnd();
    
   //Tikar
   glBegin(GL_POLYGON);
      glColor3ub(238,233,233);   glVertex2f(-2.6, -0.8);
      glColor3ub(85,107,47);     glVertex2f(-2.0, -0.8);
      glColor3ub(85,107,47);     glVertex2f(-2.2, -1.0);
      glColor3ub(85,107,47);     glVertex2f(-2.8, -1.0);
   glEnd();
   
    //Kerangka Tikar
   glLineWidth(1);
   glBegin(GL_LINE_STRIP);
      glColor3ub(0,0,0);         glVertex2f(-2.0, -0.8);
      glColor3ub(0,0,0);         glVertex2f(-2.2, -1.0);
      glColor3ub(0,0,0);         glVertex2f(-2.8, -1.0);
   glEnd();
   
   //Tiang Payung
   glLineWidth(3);
   glBegin(GL_LINES);
      glColor3ub(0,0,0);         glVertex2f(-2.7, -0.9);
      glColor3ub(0,0,0);         glVertex2f(-2.6, -0.4);
   glEnd();
   
   //Payung
   glBegin(GL_TRIANGLE_FAN);
      glColor3ub(176,224,230);   glVertex2f(-2.6, -0.2);
      glColor3ub(25,25,112);     glVertex2f(-2.9, -0.4);
      glColor3ub(255,0,0);       glVertex2f(-2.8, -0.5);
      glColor3ub(34,139,34);     glVertex2f(-2.6, -0.6);
      glColor3ub(25,25,112);     glVertex2f(-2.5, -0.6);
      glColor3ub(255,69,0);      glVertex2f(-2.3, -0.5);
      glColor3ub(148,0,211);     glVertex2f(-2.2, -0.4);
   glEnd();
   
   //Kerangka Payung
   glLineWidth(1);
   glBegin(GL_LINE_STRIP);
      glColor3ub(0,0,0);         glVertex2f(-2.6, -0.2);
      glColor3ub(0,0,0);         glVertex2f(-2.9, -0.4);
      glColor3ub(0,0,0);         glVertex2f(-2.8, -0.5);
      glColor3ub(0,0,0);         glVertex2f(-2.6, -0.6);
      glColor3ub(0,0,0);         glVertex2f(-2.5, -0.6);
      glColor3ub(0,0,0);         glVertex2f(-2.3, -0.5);
      glColor3ub(0,0,0);         glVertex2f(-2.2, -0.4);
   glEnd();

   //Gunung kanan
   glBegin(GL_TRIANGLES);
      glColor3ub(112,138,144);   glVertex2f(1.6, 0.2);
      glColor3ub(112,138,144);   glVertex2f(3.0, 0.2);
      glColor3ub(0,0,128);       glVertex2f(2.3, 1.0);      
   glEnd();
   
   //Kerangka Gunung kanan
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
      glColor3ub(0,0,0);         glVertex2f(1.6, 0.2);
      glColor3ub(0,0,0);         glVertex2f(3.0, 0.2);
      glColor3ub(0,0,0);         glVertex2f(2.3, 1.0);      
   glEnd();
   
   //Gunung kiri
   glBegin(GL_TRIANGLES);
      glColor3ub(112,138,144);   glVertex2f(0.6, 0.2);
      glColor3ub(112,138,144);   glVertex2f(2.0, 0.2);
      glColor3ub(0,0,128);       glVertex2f(1.3, 1.0);      
   glEnd();
   
   //Kerangka Gunung kiri
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
      glColor3ub(0,0,0);         glVertex2f(0.6, 0.2);
      glColor3ub(0,0,0);         glVertex2f(2.0, 0.2);
      glColor3ub(0,0,0);         glVertex2f(1.3, 1.0);      
   glEnd();
  
   //Area bawah Gunung
   glBegin(GL_TRIANGLES);
      glColor3ub(0,0,0);         glVertex2f(0.5, 0.2);
      glColor3ub(0,0,0);         glVertex2f(3.0, 0.2);
      glColor3ub(5,105,105);     glVertex2f(2.9, 0.3);
   glEnd();
   
   //Perahu
   glBegin(GL_POLYGON);
      glColor3ub(160,82,45);     glVertex2f(-0.1, -2.2);
      glColor3ub(160,82,45);     glVertex2f(-0.2, -2.3);
      glColor3ub(205,133,63);    glVertex2f(-0.1, -2.5);
      glColor3ub(160,82,45);     glVertex2f(0.0, -2.6);
      glColor3ub(205,133,63);    glVertex2f(0.3, -2.7);
      glColor3ub(160,82,45);     glVertex2f(1.4, -2.7);
      glColor3ub(139,69,19);     glVertex2f(1.7, -2.6);
      glColor3ub(160,82,45);     glVertex2f(1.8, -2.5);
      glColor3ub(255,255,255);   glVertex2f(1.9, -2.3);
      glColor3ub(255,255,255);   glVertex2f(1.8, -2.2);
      glColor3ub(255,255,255);   glVertex2f(0.9, -2.1);
   glEnd();
   glLineWidth(2);
   glBegin(GL_LINE_STRIP); //Kerangka Perahu
      glColor3ub(0,0,0);         glVertex2f(1.9, -2.3);
      glColor3ub(0,0,0);         glVertex2f(1.7, -2.4);
      glColor3ub(0,0,0);         glVertex2f(-0.1, -2.4);
      glColor3ub(165,42,42);     glVertex2f(-0.2, -2.3);
      glColor3ub(165,42,42);     glVertex2f(-0.1, -2.5);
      glColor3ub(0,0,0);         glVertex2f(0.0, -2.6);
      glColor3ub(0,0,0);         glVertex2f(0.3, -2.7);
      glColor3ub(0,0,0);         glVertex2f(1.4, -2.7);
      glColor3ub(0,0,0);         glVertex2f(1.7, -2.6);
      glColor3ub(0,0,0);         glVertex2f(1.8, -2.5);
      glColor3ub(0,0,0);         glVertex2f(1.9, -2.3);
      glColor3ub(165,42,42);     glVertex2f(1.8, -2.2);
      glColor3ub(165,42,42);     glVertex2f(0.9, -2.1);
      glColor3ub(165,42,42);     glVertex2f(-0.1, -2.2);
   glEnd();
   glLineWidth(9);
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,69,19);     glVertex2f(1.2, -2.6);
      glColor3ub(139,69,19);     glVertex2f(1.5, -2.8);
      glColor3ub(0,0,0);         glVertex2f(1.6, -2.9);
   glEnd();
   glBegin(GL_LINE_STRIP);
      glColor3ub(139,69,19);     glVertex2f(0.4, -2.6);
      glColor3ub(139,69,19);     glVertex2f(0.7, -2.8);
      glColor3ub(0,0,0);         glVertex2f(0.8, -2.9);
   glEnd();
   glBegin(GL_LINES);
      glColor3ub(139,69,19);     glVertex2f(0.4, -2.9);
      glColor3ub(205,133,63);    glVertex2f(1.8, -2.9);
   glEnd();
   glLineWidth(2);//kerangka
   glBegin(GL_LINES);
      glColor3ub(0,0,0);         glVertex2f(0.4, -2.9);
      glColor3ub(0,0,0);         glVertex2f(1.8, -2.9);
   glEnd();
   
   
   
   glFlush();
}

void AirLaut() {
	glBegin(GL_TRIANGLES);
      glColor3ub(135,206,250);   glVertex2f(3.0, 0.3);
      glColor3ub(255,255,255);   glVertex2f(-2.8, 0.3);
      glColor3ub(255,255,255);   glVertex2f(3.0, -2.8);
   glEnd(); 
}

void Pohon() {

	// POHON KIRI
		
	//Batang Kelapa
   glBegin(GL_POLYGON);
      glColor3ub(0,0,0);         glVertex2f(-3.0, -2.7);
      glColor3ub(222, 133, 63);  glVertex2f(-2.9, -2.5);
      glColor3ub(210, 105, 30);  glVertex2f(-2.8, -2.2);
      glColor3ub(255, 222, 173); glVertex2f(-2.7, -1.9);
      glColor3ub(205,133,63);    glVertex2f(-2.6, -1.7);
      glColor3ub(205, 133, 63);  glVertex2f(-2.5, -1.5);
      glColor3ub(222, 184, 135); glVertex2f(-2.2, -1.0);
      glColor3ub(205,133,63);    glVertex2f(-2.0, -0.8);
      glColor3ub(210, 105, 30);  glVertex2f(-2.1, -1.1);
      glColor3ub(255, 222, 173); glVertex2f(-2.2, -1.3);
      glColor3ub(205,133,63);    glVertex2f(-2.3, -1.5);
      glColor3ub(160, 82, 45);   glVertex2f(-2.4, -1.7);
      glColor3ub(205, 133, 63);  glVertex2f(-2.5, -2.0);
      glColor3ub(210, 105, 30);  glVertex2f(-2.6, -2.4);      
      glColor3ub(0,0,0);         glVertex2f(-2.5, -2.7);      
   glEnd();
   
   //Daun Kelapa kanan bawah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-1.8, -1.0);
      glColor3ub(107,142,35);    glVertex2f(-1.8, -1.1);
      glColor3ub(107,142,35);    glVertex2f(-1.9, -1.3);
      glColor3ub(154,205,50);    glVertex2f(-2.0, -1.5);
      glColor3ub(107,142,35);    glVertex2f(-2.2, -1.7);
      glColor3ub(154,205,50);    glVertex2f(-2.1, -2.5);
      glColor3ub(107,142,35);    glVertex2f(-2.2, -2.5);
      glColor3ub(124,252,0);     glVertex2f(-2.1, -2.1);
      glColor3ub(107,142,35);    glVertex2f(-1.9, -0.9);
   glEnd();
   
   //Daun Kelapa kanan bawah2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-1.8, -0.7);
      glColor3ub(107,142,35);    glVertex2f(-1.4, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-0.3, -1.0);
      glColor3ub(154,205,50);    glVertex2f(-0.2, -1.3);
      glColor3ub(107,142,35);    glVertex2f(-0.2, -1.4);
      glColor3ub(154,205,50);    glVertex2f(-0.5, -1.2);
      glColor3ub(107,142,35);    glVertex2f(-0.4, -1.1);
      glColor3ub(124,252,0);     glVertex2f(-0.4, -1.0);
      glColor3ub(107,142,35);    glVertex2f(-0.3, -0.9);
   glEnd();
   
   //Daun Kelapa kanan bawah3
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-1.8, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-1.9, -1.1);
      glColor3ub(107,142,35);    glVertex2f(-1.7, -1.3);
      glColor3ub(154,205,50);    glVertex2f(-1.6, -1.2);
      glColor3ub(107,142,35);    glVertex2f(-1.9, -1.7);
      glColor3ub(154,205,50);    glVertex2f(-1.7, -1.5);
      glColor3ub(107,142,35);    glVertex2f(-1.5, -1.1);
      glColor3ub(124,252,0);     glVertex2f(-2.1, -1.2);
      glColor3ub(107,142,35);    glVertex2f(-1.6, -0.8);
   glEnd();
   
    //Daun Kelapa tengah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(124,252,0);     glVertex2f(-1.9, -0.5);
      glColor3ub(255,255,224);   glVertex2f(-1.8, 0.0);
      glColor3ub(173,255,47);    glVertex2f(-1.8, -0.5);
      glColor3ub(250,250,210);   glVertex2f(-1.5, -0.1);
      glColor3ub(173,255,47);    glVertex2f(-1.7, -0.6);
   glEnd();
   
   //Daun Kelapa kiri
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-2.2, -0.7);
      glColor3ub(255,255,224);   glVertex2f(-2.3, -0.7);
      glColor3ub(173,255,47);    glVertex2f(-2.5, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-2.5, -1.0);
      glColor3ub(173,255,47);    glVertex2f(-2.6, -1.1);
      glColor3ub(107,142,35);    glVertex2f(-2.5, -1.3);
      glColor3ub(173,255,47);    glVertex2f(-2.7, -1.7);
      glColor3ub(173,255,47);    glVertex2f(-2.5, -1.3);
      glColor3ub(173,255,47);    glVertex2f(-2.4, -1.3);
      glColor3ub(107,142,35);    glVertex2f(-2.4, -1.1);
      glColor3ub(173,255,47);    glVertex2f(-2.3, -1.1);
      glColor3ub(107,142,35);    glVertex2f(-2.3, -0.9);
   glEnd();
   
   //Daun kiri2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-2.1, -0.6);
      glColor3ub(255,255,224);   glVertex2f(-2.3, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.4, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.7, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.8, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-2.9, -0.7);
      glColor3ub(173,255,47);    glVertex2f(-2.7, -0.6);
      glColor3ub(173,255,47);    glVertex2f(-2.6, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.4, -0.4);
      glColor3ub(107,142,35);    glVertex2f(-2.4, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.2, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-2.2, -0.6);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
   glEnd();
   
   //Daun kiri3
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-1.5, -0.6);
      glColor3ub(255,255,224);   glVertex2f(-1.6, -0.9);
      glColor3ub(173,255,47);    glVertex2f(-2.5, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-2.6, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-2.7, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-2.9, -0.7);
      glColor3ub(173,255,47);    glVertex2f(-2.6, -0.8);
      glColor3ub(173,255,47);    glVertex2f(-2.6, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.4, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-2.7, -0.5);
      glColor3ub(173,255,47);    glVertex2f(-2.2, -0.5);
      glColor3ub(107,142,35);    glVertex2f(-2.4, -0.8);
      glColor3ub(107,142,35);    glVertex2f(-2.0, -0.9);
   glEnd();
	
	
	
	// POHON KANAN
	
	glBegin(GL_POLYGON);
      glColor3ub(0,0,0);         glVertex2f(3.0, -2.7);
      glColor3ub(222, 133, 63);  glVertex2f(2.9, -2.5);
      glColor3ub(210, 105, 30);  glVertex2f(2.8, -2.2);
      glColor3ub(255, 222, 173); glVertex2f(2.7, -1.9);
      glColor3ub(205,133,63);    glVertex2f(2.6, -1.7);
      glColor3ub(205, 133, 63);  glVertex2f(2.5, -1.5);
      glColor3ub(222, 184, 135); glVertex2f(2.2, -1.0);
      glColor3ub(205,133,63);    glVertex2f(2.0, -0.8);
      glColor3ub(210, 105, 30);  glVertex2f(2.1, -1.1);
      glColor3ub(255, 222, 173); glVertex2f(2.2, -1.3);
      glColor3ub(205,133,63);    glVertex2f(2.3, -1.5);
      glColor3ub(160, 82, 45);   glVertex2f(2.4, -1.7);
      glColor3ub(205, 133, 63);  glVertex2f(2.5, -2.0);
      glColor3ub(210, 105, 30);  glVertex2f(2.6, -2.4);      
      glColor3ub(0,0,0);         glVertex2f(2.5, -2.7);      
   glEnd();
   
   //Daun Kelapa kanan bawah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(2.0, -0.8);
      glColor3ub(107,142,35);    glVertex2f(1.8, -1.0);
      glColor3ub(107,142,35);    glVertex2f(1.8, -1.1);
      glColor3ub(107,142,35);    glVertex2f(1.9, -1.3);
      glColor3ub(154,205,50);    glVertex2f(2.0, -1.5);
      glColor3ub(107,142,35);    glVertex2f(2.2, -1.7);
      glColor3ub(154,205,50);    glVertex2f(2.1, -2.5);
      glColor3ub(107,142,35);    glVertex2f(2.2, -2.5);
      glColor3ub(124,252,0);     glVertex2f(2.1, -2.1);
      glColor3ub(107,142,35);    glVertex2f(1.9, -0.9);
   glEnd();
   
   //Daun Kelapa kanan bawah2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(2.0, -0.8);
      glColor3ub(107,142,35);    glVertex2f(1.8, -0.7);
      glColor3ub(107,142,35);    glVertex2f(1.4, -0.8);
      glColor3ub(107,142,35);    glVertex2f(0.3, -1.0);
      glColor3ub(154,205,50);    glVertex2f(0.2, -1.3);
      glColor3ub(107,142,35);    glVertex2f(0.2, -1.4);
      glColor3ub(154,205,50);    glVertex2f(0.5, -1.2);
      glColor3ub(107,142,35);    glVertex2f(0.4, -1.1);
      glColor3ub(124,252,0);     glVertex2f(0.4, -1.0);
      glColor3ub(107,142,35);    glVertex2f(0.3, -0.9);
   glEnd();
   
    //Daun Kelapa tengah
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(2.0, -0.8);
      glColor3ub(124,252,0);     glVertex2f(1.9, -0.5);
      glColor3ub(255,255,224);   glVertex2f(1.8, 0.0);
      glColor3ub(173,255,47);    glVertex2f(1.8, -0.5);
      glColor3ub(250,250,210);   glVertex2f(1.5, -0.1);
      glColor3ub(173,255,47);    glVertex2f(1.7, -0.6);
   glEnd();
   
   //Daun Kelapa kiri
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(2.0, -0.8);
      glColor3ub(173,255,47);    glVertex2f(2.2, -0.7);
      glColor3ub(255,255,224);   glVertex2f(2.3, -0.7);
      glColor3ub(173,255,47);    glVertex2f(2.5, -0.8);
      glColor3ub(173,255,47);    glVertex2f(2.5, -1.0);
      glColor3ub(173,255,47);    glVertex2f(2.6, -1.1);
      glColor3ub(107,142,35);    glVertex2f(2.5, -1.3);
      glColor3ub(173,255,47);    glVertex2f(2.7, -1.7);
      glColor3ub(173,255,47);    glVertex2f(2.5, -1.3);
      glColor3ub(173,255,47);    glVertex2f(2.4, -1.3);
      glColor3ub(107,142,35);    glVertex2f(2.4, -1.1);
      glColor3ub(173,255,47);    glVertex2f(2.3, -1.1);
      glColor3ub(107,142,35);    glVertex2f(2.3, -0.9);
   glEnd();
   
   //Daun kiri2
   glBegin(GL_POLYGON);
      glColor3ub(107,142,35);    glVertex2f(2.0, -0.8);
      glColor3ub(173,255,47);    glVertex2f(2.1, -0.6);
      glColor3ub(255,255,224);   glVertex2f(2.3, -0.5);
      glColor3ub(173,255,47);    glVertex2f(2.4, -0.5);
      glColor3ub(173,255,47);    glVertex2f(2.7, -0.5);
      glColor3ub(173,255,47);    glVertex2f(2.8, -0.5);
      glColor3ub(107,142,35);    glVertex2f(2.9, -0.7);
      glColor3ub(173,255,47);    glVertex2f(2.7, -0.6);
      glColor3ub(173,255,47);    glVertex2f(2.6, -0.5);
      glColor3ub(173,255,47);    glVertex2f(2.4, -0.4);
      glColor3ub(107,142,35);    glVertex2f(2.4, -0.5);
      glColor3ub(173,255,47);    glVertex2f(2.2, -0.5);
      glColor3ub(107,142,35);    glVertex2f(2.2, -0.6);
      glColor3ub(107,142,35);    glVertex2f(2.0, -0.8);
   glEnd();
   
	// AWAN KANAN
	glBegin(GL_POLYGON);
		glColor3ub(128,128,255);		glVertex2f(0.89, 0.65);
		glColor3ub(255,255,255);		glVertex2f(1.07, 0.45);
		glColor3ub(128,128,255);		glVertex2f(1.25, 0.49);
		glColor3ub(255,255,255);		glVertex2f(1.5, 0.42);
		glColor3ub(128,128,255);		glVertex2f(1.66, 0.55);
		glColor3ub(255,255,255);		glVertex2f(1.73, 0.89);
		glColor3ub(128,128,255);		glVertex2f(1.56, 1.17);
		glColor3ub(255,255,255);		glVertex2f(1.41, 1.22);
		glColor3ub(128,128,255);		glVertex2f(1.24, 1.13);
		glColor3ub(255,255,255);		glVertex2f(1.04, 1.19);
		glColor3ub(128,128,255);		glVertex2f(0.85, 0.97);
	glEnd();
	
	// AWAN KIRI (translate -3)
	glBegin(GL_POLYGON);
		glColor3ub(128,128,255);		glVertex2f(-2.11, 0.65);
		glColor3ub(255,255,255);		glVertex2f(-1.93, 0.45);
		glColor3ub(128,128,255);		glVertex2f(-1.75, 0.49);
		glColor3ub(255,255,255);		glVertex2f(-1.5, 0.42);
		glColor3ub(128,128,255);		glVertex2f(-1.34, 0.55);
		glColor3ub(255,255,255);		glVertex2f(-1.27, 0.89);
		glColor3ub(128,128,255);		glVertex2f(-1.44, 1.17);
		glColor3ub(255,255,255);		glVertex2f(-1.59, 1.22);
		glColor3ub(128,128,255);		glVertex2f(-1.76, 1.13);
		glColor3ub(255,255,255);		glVertex2f(-1.96, 1.19);
		glColor3ub(128,128,255);		glVertex2f(-2.15, 0.97);
	glEnd();

	
}

void Awan() {

/*
scale:951 x 491

281, 107 = 281/951 = x / 3 = 281x3 / 951, 107x3 / 491 = 0.89, 0.65
340, 74 = 340x3/951, 74x3/491 = 1.07, 0.45
395, 80 = 395x3/951, 80x3/491 = 1.25, 0.49
479, 68 = 479x3/951, 68x3/491 = 1.5, 0.42
525, 90 = 525x3/951, 90x3/491 = 1.66, 0.55
547, 146 = 547x3/951, 146x3/491 = 1.73, 0.89
495, 191 = 495x3/951, 191x3/491 = 1.56, 1.17
447, 200 = 447x3/951, 200x3/491 = 1.41, 1.22
392, 185 = 392x3/951, 185x3/491 = 1.24, 1.13
331, 195 = 331x3/951, 195x3/491 = 1.04, 1.19
269, 159 = 269x3/951, 159x3/491 = 0.85, 0.97
*/

	// AWAN KANAN
	glBegin(GL_POLYGON);
		glColor3ub(128,128,255);		glVertex2f(0.89, 0.65);
		glColor3ub(255,255,255);		glVertex2f(1.07, 0.45);
		glColor3ub(128,128,255);		glVertex2f(1.25, 0.49);
		glColor3ub(255,255,255);		glVertex2f(1.5, 0.42);
		glColor3ub(128,128,255);		glVertex2f(1.66, 0.55);
		glColor3ub(255,255,255);		glVertex2f(1.73, 0.89);
		glColor3ub(128,128,255);		glVertex2f(1.56, 1.17);
		glColor3ub(255,255,255);		glVertex2f(1.41, 1.22);
		glColor3ub(128,128,255);		glVertex2f(1.24, 1.13);
		glColor3ub(255,255,255);		glVertex2f(1.04, 1.19);
		glColor3ub(128,128,255);		glVertex2f(0.85, 0.97);
	glEnd();
	
	// AWAN KIRI (translate -3)
	glBegin(GL_POLYGON);
		glColor3ub(128,128,255);		glVertex2f(-2.11, 0.65);
		glColor3ub(255,255,255);		glVertex2f(-1.93, 0.45);
		glColor3ub(128,128,255);		glVertex2f(-1.75, 0.49);
		glColor3ub(255,255,255);		glVertex2f(-1.5, 0.42);
		glColor3ub(128,128,255);		glVertex2f(-1.34, 0.55);
		glColor3ub(255,255,255);		glVertex2f(-1.27, 0.89);
		glColor3ub(128,128,255);		glVertex2f(-1.44, 1.17);
		glColor3ub(255,255,255);		glVertex2f(-1.59, 1.22);
		glColor3ub(128,128,255);		glVertex2f(-1.76, 1.13);
		glColor3ub(255,255,255);		glVertex2f(-1.96, 1.19);
		glColor3ub(128,128,255);		glVertex2f(-2.15, 0.97);
	glEnd();
	
}

void Matahari() {

	// POLYGON MATAHARI
	
	// CENTER = 413 198		1.3 1.21
	/*
	368 143		1.16 0.87
	382 131		1.21 0.8
	
	401 128		1.27 0.78
	425 125		1.34 0.76
	
	448 135		1.41 0.82
	464 147		1.46 0.90
	
	480 183		1.51 1.12
	480 210		1.51 1.28
	
	471 235		1.49 1.44
	457 255		1.44 1.56
	
	434 272		1.34 1.66
	401 270		1.26 1.65
	
	375 257		1.18 1.57
	360 243		1.14 1.48
	
	345 216		1.09 1.32
	345 187		1.09 1.14
	
	353 167		1.11 1.02
	368 143		1.16 0.87
	*/
	
	/*
	glBegin(GL_TRIANGLES);
	
		glColor3ub(112,138,144);   	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);   	glVertex2f(0.16, 1.87);
		glColor3ub(112,138,144);    glVertex2f(0.21, 1.8);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
			   
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(0.21, 1.87);
		glColor3ub(112,138,144);	glVertex2f(2.34, 1.76);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(2.34, 1.76);
		glColor3ub(112,138,144);	glVertex2f(2.46, 1.90);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(2.46, 0.90);
		glColor3ub(112,138,144);	glVertex2f(2.51, 1.28);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(2.51, 1.28);
		glColor3ub(112,138,144);	glVertex2f(2.44, 1.56);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(2.44, 1.56);
		glColor3ub(112,138,144);	glVertex2f(2.26, 1.65);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(0.26, 1.65);
		glColor3ub(112,138,144);	glVertex2f(0.14, 1.48);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(0.14, 1.48);
		glColor3ub(112,138,144);	glVertex2f(0.09, 1.14);
	
	glEnd();
	
	glBegin(GL_TRIANGLES);
				
		glColor3ub(112,138,144);	glVertex2f(1.3, 1.21);
		glColor3ub(112,138,144);	glVertex2f(0.09, 1.14);
		glColor3ub(112,138,144);	glVertex2f(0.16, 0.87);
				
	glEnd();
	*/
	
	// SINAR MATAHARI
	
	// NEW RECORD
	/*
	 * center = 719, 205	
	582 101		1.84 0.62
	719 51		2.27 0.31
	843 97		2.66 0.59
	897 205		2.83 1.25
	843 324		2.66 1.98
	719 380		2.27 2.32
	582 321		1.84 1.96
	535 205		1.69 1.25
	*/
	
	// BODY
	glBegin(GL_TRIANGLES);
				
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(1.84, 0.62);
		glColor3ub(255,178,102);	glVertex2f(2.27, 0.31);
				
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(2.27, 0.31);
		glColor3ub(255,178,102);	glVertex2f(2.66, 0.59);
				
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(2.66, 0.59);
		glColor3ub(255,178,102);	glVertex2f(2.83, 1.25);
		
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(2.83, 1.25);
		glColor3ub(255,178,102);	glVertex2f(2.66, 1.98);
		
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(2.66, 1.98);
		glColor3ub(255,178,102);	glVertex2f(2.27, 2.32);
		
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(2.27, 2.32);
		glColor3ub(255,178,102);	glVertex2f(1.84, 1.96);
		
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(1.84, 1.96);
		glColor3ub(255,178,102);	glVertex2f(1.69, 1.25);
		
		glColor3ub(255,255,0);	glVertex2f(2.27, 1.25);
		glColor3ub(255,178,102);	glVertex2f(1.69, 1.25);
		glColor3ub(255,178,102);	glVertex2f(1.84, 0.62);
		
	glEnd();
	
	
	// SINAR
	glBegin(GL_TRIANGLES);
				
		glColor3ub(255,178,102);			glVertex2f(1.9, 0.1);
		glColor3ub(255,255,0);	glVertex2f(1.84, 0.62);
		glColor3ub(255,255,0);	glVertex2f(2.27, 0.31);
				
		glColor3ub(255,178,102);			glVertex2f(2.75, 0.35);
		glColor3ub(255,255,0);	glVertex2f(2.27, 0.31);
		glColor3ub(255,255,0);	glVertex2f(2.66, 0.59);
				
		glColor3ub(255,178,102);			glVertex2f(2.9, 0.8);
		glColor3ub(255,255,0);	glVertex2f(2.66, 0.59);
		glColor3ub(255,255,0);	glVertex2f(2.83, 1.25);
		
		glColor3ub(255,178,102);			glVertex2f(2.9, 1.95);
		glColor3ub(255,255,0);	glVertex2f(2.83, 1.25);
		glColor3ub(255,255,0);	glVertex2f(2.66, 1.98);
		
		glColor3ub(255,178,102);			glVertex2f(2.4, 2.5);
		glColor3ub(255,255,0);	glVertex2f(2.66, 1.98);
		glColor3ub(255,255,0);	glVertex2f(2.27, 2.32);
		
		glColor3ub(255,178,102);			glVertex2f(1.9, 2.5);
		glColor3ub(255,255,0);	glVertex2f(2.27, 2.32);
		glColor3ub(255,255,0);	glVertex2f(1.84, 1.96);
		
		glColor3ub(255,178,102);			glVertex2f(1.5, 1.7);
		glColor3ub(255,255,0);	glVertex2f(1.84, 1.96);
		glColor3ub(255,255,0);	glVertex2f(1.69, 1.25);
		
		glColor3ub(255,178,102);			glVertex2f(1.4, 0.9);
		glColor3ub(255,255,0);	glVertex2f(1.69, 1.25);
		glColor3ub(255,255,0);	glVertex2f(1.84, 0.62);
		
		
	glEnd();
	
	
}

void display(void){
   glClear (GL_COLOR_BUFFER_BIT);  
   Pohon();
   glEnd();
   glFlush();
}

int main(int argc, char *argv[]){
	glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(700,700);                 // ukuran jendela
    glutInitWindowPosition(15,15);             // sumbu x : kiri ke kanan // sumbu y : atas ke bawah
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); // mode tampilan warna RGB dan banyak frame
    glutCreateWindow("Panorama Laut di Sore Hari");                // mengubah judul pada frame windows
    gluOrtho2D(-3, 3., -3, 3);                   // Plot batas koodinat x dan y (dari -1 sd 1)
 glClearColor(1.0, 1.0, 1.0, 1.0);    // warna background window R G B A
    glutDisplayFunc(display);                    // fungsi untuk menampilkan display
    glutMainLoop();                              // fungsi untuk mengulangi program utama secara terus menerus
    return 0;
}
