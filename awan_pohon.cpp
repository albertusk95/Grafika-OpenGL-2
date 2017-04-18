#include <GL/glut.h>  // GLUT, includes glu.h and gl.h

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
	glutInit(&argc, argv);          
    glutInitWindowSize(700,700);                 
    glutInitWindowPosition(15,15);            
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); 
    glutCreateWindow("Pemandangan");               
    gluOrtho2D(-3, 3., -3, 3);                   // Plot batas koodinat x dan y (dari -3 sd 3)
 glClearColor(1.0, 1.0, 1.0, 1.0);    			// warna background window R G B A
    glutDisplayFunc(display);                    // fungsi untuk menampilkan display
    glutMainLoop();                              // fungsi untuk mengulangi program utama secara terus menerus
    return 0;
}
