double x0 = sin(phi(0));
double x1 = sin(phi(1));
double x2 = cos(phi(1));
double x3 = cos(phi(3));
double x4 = sin(phi(3));
double x5 = cos(phi(2));
double x6 = cos(phi(0));
double x7 = sin(phi(2));
double x8 = cos(phi(4));
double x9 = sin(phi(4));
double x10 = sin(phi(5));
double x11 = cos(phi(5));
double x12 = -a_5;
double x13 = pow(x0, 2);
double x14 = pow(x5, 2);
double x15 = pow(x6, 2);
double x16 = -x9;
double x17 = -x11;
double x18 = a_5*x4;
double x19 = -x0;
double x20 = a_3*x1;
double x21 = -x6;
double x22 = x1*x7;
double x23 = x6*x7;
double x24 = x1*x3;
double x25 = x0*x5;
double x26 = x1*x6;
double x27 = x1*x4;
double x28 = x2*x5;
double x29 = x0*x7;
double x30 = -x2*x4;
double x31 = x24*x5;
double x32 = x14*x2*x4;
double x33 = x2*x3 + x27*x5;
double x34 = x2*x29 + x21*x5;
double x35 = x2*x23 + x25;
double x36 = x21*x28 + x29;
double x37 = x2*x25 + x23;
double x38 = x30 + x31;
double x39 = a_3*x2 + a_5*x33;
double x40 = x19*x24 + x37*x4;
double x41 = x24*x6 + x36*x4;
double x42 = x21*x27 + x3*x36;
double x43 = x0*x27 + x3*x37;
jac(0, 0) = a_5*x40 + x19*x20;
jac(0, 1) = x39*x6;
jac(0, 2) = x18*x35;
jac(0, 3) = x12*(x22*x40 - x33*x34);
jac(0, 4) = 0;
jac(0, 5) = 0;
jac(0, 6) = 0;
jac(1, 0) = a_5*x41 + x20*x6;
jac(1, 1) = x0*x39;
jac(1, 2) = x18*x34;
jac(1, 3) = x12*(x22*x41 + x33*x35);
jac(1, 4) = 0;
jac(1, 5) = 0;
jac(1, 6) = 0;
jac(2, 0) = 0;
jac(2, 1) = x12*x24 + x18*x28 - x20;
jac(2, 2) = x12*x22*x4;
jac(2, 3) = a_5*(x13*x30 + x13*x32 + x14*x30 + x15*x30 + x15*x32 + x31);
jac(2, 4) = 0;
jac(2, 5) = 0;
jac(2, 6) = 0;
jac(3, 0) = 0;
jac(3, 1) = x19;
jac(3, 2) = x26;
jac(3, 3) = x35;
jac(3, 4) = x41;
jac(3, 5) = -x35*x8 + x42*x9;
jac(3, 6) = x10*(-x35*x9 - x42*x8) + x11*x41;
jac(4, 0) = 0;
jac(4, 1) = x6;
jac(4, 2) = x0*x1;
jac(4, 3) = x34;
jac(4, 4) = -x40;
jac(4, 5) = -x34*x8 - x43*x9;
jac(4, 6) = x10*(x16*x34 + x43*x8) + x17*x40;
jac(5, 0) = 1;
jac(5, 1) = 0;
jac(5, 2) = x2;
jac(5, 3) = -x22;
jac(5, 4) = x33;
jac(5, 5) = x22*x8 + x38*x9;
jac(5, 6) = -x10*(x16*x22 + x38*x8) - x17*x33;
