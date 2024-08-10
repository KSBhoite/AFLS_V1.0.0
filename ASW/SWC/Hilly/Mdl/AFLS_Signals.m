% Data Input
Longi_Distance_s = Simulink.Signal;
Longi_Distance_s.CoderInfo.StorageClass = 'Custom';
Longi_Distance_s.CoderInfo.StorageClass = 'Custom';
Longi_Distance_s.CoderInfo.CustomStorageClass = 'GetSet';
Longi_Distance_s.CoderInfo.CustomAttributes.GetFunction = 'Get_Longi_Distance';
Longi_Distance_s.CoderInfo.CustomAttributes.SetFunction = 'Set_Longi_Distance';
Longi_Distance_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';


Lat_Distance_s = Simulink.Signal;
Lat_Distance_s.CoderInfo.StorageClass = 'Custom';
Lat_Distance_s.CoderInfo.StorageClass = 'Custom';
Lat_Distance_s.CoderInfo.CustomStorageClass = 'GetSet';
Lat_Distance_s.CoderInfo.CustomAttributes.GetFunction = 'Get_Lat_Distance';
Lat_Distance_s.CoderInfo.CustomAttributes.SetFunction = 'Set_Lat_Distance';
Lat_Distance_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';


Lux_s = Simulink.Signal;
Lux_s.CoderInfo.StorageClass = 'Custom';
Lux_s.CoderInfo.StorageClass = 'Custom';
Lux_s.CoderInfo.CustomStorageClass = 'GetSet';
Lux_s.CoderInfo.CustomAttributes.GetFunction = 'Get_Lux';
Lux_s.CoderInfo.CustomAttributes.SetFunction = 'Set_Lux';
Lux_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';


Wheel_Angle_s = Simulink.Signal;
Wheel_Angle_s.CoderInfo.StorageClass = 'Custom';
Wheel_Angle_s.CoderInfo.StorageClass = 'Custom';
Wheel_Angle_s.CoderInfo.CustomStorageClass = 'GetSet';
Wheel_Angle_s.CoderInfo.CustomAttributes.GetFunction = 'Get_Wheel_Angle';
Wheel_Angle_s.CoderInfo.CustomAttributes.SetFunction = 'Set_Wheel_Angle';
Wheel_Angle_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';

Speed_s = Simulink.Signal;
Speed_s.CoderInfo.StorageClass = 'Custom';
Speed_s.CoderInfo.StorageClass = 'Custom';
Speed_s.CoderInfo.CustomStorageClass = 'GetSet';
Speed_s.CoderInfo.CustomAttributes.GetFunction = 'Get_Speed';
Speed_s.CoderInfo.CustomAttributes.SetFunction = 'Set_Speed';
Speed_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';


%% DATA OUTPUT
low_High_Output_s = Simulink.Signal;
low_High_Output_s.CoderInfo.StorageClass = 'Custom';
low_High_Output_s.CoderInfo.StorageClass = 'Custom';
low_High_Output_s.CoderInfo.CustomStorageClass = 'GetSet';
low_High_Output_s.CoderInfo.CustomAttributes.GetFunction = 'Get_low_High_Output';
low_High_Output_s.CoderInfo.CustomAttributes.SetFunction = 'Set_low_High_Output';
low_High_Output_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';


Right_Left_s = Simulink.Signal;
Right_Left_s.CoderInfo.StorageClass = 'Custom';
Right_Left_s.CoderInfo.StorageClass = 'Custom';
Right_Left_s.CoderInfo.CustomStorageClass = 'GetSet';
Right_Left_s.CoderInfo.CustomAttributes.GetFunction = 'Get_Right_Left';
Right_Left_s.CoderInfo.CustomAttributes.SetFunction = 'Set_Right_Left';
Right_Left_s.CoderInfo.CustomAttributes.HeaderFile = 'signals.h';
