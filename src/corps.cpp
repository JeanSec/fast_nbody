void Corps::new_position(){
	this.m_x = this.m_x + this.m_vx;
	this.m_y = this.m_y + this.m_vy;
}

void Corps::new_vitesse(){
	this.m_vx = this.m_vx + this.m_vx;
	this.m_vy = this.m_vy + this.m_vy;
}

void Corps::new_acceleration(const double** mat){

}

void Corps::calcul_distances(Corps *mes_corps){

}

Corps::Corps(double m, double x, double y, double m_vx, double m_vy){

}

Corps::Corps(const Corps& corps0){

}


Corps::~Corps(){

}


/*

***********************
ax11 ax12 ax13 ... ax1n
ax21 ax22 ax23 ... ax2n
ax31 ax32 ax33 ... ax3n
.
.
.
axn1 axn2 axn3 ... axnn
***********************



***********************
dx11 dx12 dx13 ... dx1n
dx21 dx22 dx23 ... dx2n
dx31 dx32 dx33 ... dx3n
.
.
.
dxn1 dxn2 dxn3 ... dxnn
***********************
*/