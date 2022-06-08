clear all
clc
disp('press 1 for least square');
disp('press 2 for exponentional');
disp('press 3 for geometric');
ch=input('Enter your choic: ');

switch(ch)
    case 1
      x=input('x=');
      y=input('y=');
      CurveFitting(x,y);
        case 2
            x=input('x=');
            y=input('y=');
            CurveExpo(x,y);
            case 3
                x=input('x=');
                y=input('y=');
                CurveGeom(x,y);
    otherwise
        disp('Wrong choice');
end