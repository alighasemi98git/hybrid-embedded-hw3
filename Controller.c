Delta_g[0] = xg - x;
Delta_g[1] = yg - y; 
Delta_0[0] = x0 - x;
Delta_0[1] = y0 - y;

thetag = atan2(Delta_g[1],Delta_g[0])*180/PI;

vc[0] = cos(theta*PI/180);
vc[1] = sin(theta*PI/180);
vg[0] = cos(thetag*PI/180);
vg[1] = sin(thetag*PI/180);

vg_n[0] = sin(thetag*PI/180);
vg_n[1] = -cos(thetag*PI/180);
vp[0] = x+p*cos(theta*PI/180)-x0;
vp[1] = y+p*sin(theta*PI/180)-y0;

delta_0 = Delta_0[0] * vc[0] + Delta_0[1] * vc[1];
delta_g = Delta_g[0] * vg[0] + Delta_g[1] * vg[1];
delta_p = vp[0] * vg_n[0] + vp[1] * vg_n[1];

// atan2 domain (if near -180 ==> =180)

// guards
if(abs(xg-x)+abs(yg-y)<1){
	state=0;	
}else if(((abs(x-x0)+abs(y-y0))<1 && abs(thetag-theta)>3)){
	state=1;
}else{
	state=2;
}

// dynamics
if(state==1){ // ROTATION
    w = K_rot*(thetag-theta);
    v = K_w*delta_0;
}
else if(state==2){ // TRANSLATION
    v=K_wII*delta_g;
    w=K_rotII*delta_p;
}
else if(state==0){ // ARRIVAL
    w = 0,
    v = 0;
}




right=(v+w/2);
left=(v-w/2);


// Serial.print(";");
// Serial.print(delta_0);
// Serial.print(";");
// Serial.print(theta - thetag);





