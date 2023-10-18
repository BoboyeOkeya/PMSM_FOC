import numpy as np

# Numpy module is imported as 'np'
# Scipy module is imported as 'sp'
# The Schematic API is imported as 'mdl'
# To get the model file path, use 'mdl.get_model_file_path()'
# To print information to the console, use info()


#Power Stage & Inverter Parameters
Vdc = 500 #DC-link Voltage
fsw = 50e3 #Switching Frequency
dt = 1e-6 #inverter switch dead-time period

#Execution rates
Ts = 1/fsw #Sampling time of the inner current loop
T_inner = Ts #Sampling time of the inner current loop
T_outer = 3*T_inner #Sampling time of the outer speed loop

#PMSM Parameters
Rs = 1.09 #Stator Resistance-Ohms
Ld = 0.0124 #Stator d-axis inductance-Henrys H
Lq = 0.0124 #Stator q-axis inductance-Henrys H
psi = 0.1821 #Permanent magnet flux-Webers
p = 4 #Pole pairs
J = 4.15e-4 #Inertia-J
b = 0 #Coefficient of friction


#Inner Isq Current Controller
Fc_sq = 0#Current feedback filter cut-off frequency(Hz)
Tf_sq = 0#1/(2*np.pi*Fc_sq)#Current feedback filter time constant(s)
T_total_sq = (2*Ts) + Tf_sq #Total sum of all delays in the Isq current control loop
Ti_sq = Lq/Rs #Integral time constant = stator time constant
Kp_sq = (Lq/(2*T_total_sq))#Proportional gain
Ki_sq = (Kp_sq/Ti_sq) #Integral gain

#Outer Speed Controller
In = 10 # PMSM nominal current
Ts_w = T_outer #Sampling time of the outer speed controller loop
Fc_w = 0 #Speed feedback filter cut-off frequency(Hz)
Tf_w = 0 #1/(2*np.pi*Fc_w)#Speed feedback filter time constant(s)
T_total_w = (1.5* Ts_w) + Tf_w + (2*T_total_sq) - Tf_sq - (0.5*Ts) #Total sum of all delays in the speed control loop
Ti_w = (4*T_total_w) #Integral time constant
Kp_w = (J/(3*psi*p*p*T_total_w))#Proportional gain
Ki_w = (Kp_w/Ti_w)#Integral gain
Kp_w = Kp_w
Ki_w = Ki_w

#Inner Isd Current Controller
Fc_sd = 0 #Current feedback filter cut-off frequency(Hz)
Tf_sd = 0 #1/(2*np.pi*Fc_sd) #Current feedback filter time constant(s)
T_total_sd = (2*Ts) + Tf_sd #Total sum of all delays in the Isq current control loop
Ti_sd = Ld/Rs #Integral time constant = stator time constant
Kp_sd = (Ld/(2*T_total_sd))#Proportional gain
Ki_sd = (Kp_sd/Ti_sd)#Integral gain

print(f"Kp_sq = {Kp_sq}; ki_sq = {Ki_sq}; Ti_sq =  {Ti_sq}")
print(f"Kp_w = {Kp_w}; ki_w = {Ki_w}; Ti_w = {Ti_w}")
print(f"Kp_sd = {Kp_sd}; ki_sd = {Ki_sd}; Ti_sd = {Ti_sd}")