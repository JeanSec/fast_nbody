
class Corps {

	private :
		double m_m;
		double m_x;
		double m_y;
		double m_vx;
		double m_vy;
		double m_ax;
		double m_ay;
		double m_az;

	public : 

		Corps(double m, double x, double y, double m_vx, double m_vy);

		Corps(const Corps& corps0); //constructeur de recopie

		void new_position();

		void new_vitesse();

		void new_acceleration(const double** mat);

		void calcul_distances();

		~Corps();
		

};



