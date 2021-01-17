class MyExp {
	public MyExp();
	public MyExp(double x);
	public MyExp(const MyExp &obj);
	public ~MyExp();
	public double value();
	public void setX(double);
	public double getX();
	private double mX;
}