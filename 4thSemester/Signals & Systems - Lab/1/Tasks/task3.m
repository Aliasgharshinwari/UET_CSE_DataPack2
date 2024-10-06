clear
clc

CP_ch = input('Enter CP Credit Hours \n');
CP_gp = input('Enter CP Grade Points \n');

CS_ch = input('Enter CS Credit Hours \n');
CS_gp = input('Enter CS Grade Points \n');

DE_ch = input('Enter DE Credit Hours \n');
DE_gp = input('Enter DE Grade Points \n');

CPS_ch = input('Enter CPS Credit Hours \n');
CPS_gp = input('Enter CPS Grade Points \n');

EDG_ch = input('Enter EDG Credit Hours \n');
EDG_gp = input('Enter EDG Grade Points \n');

PS_ch = input('Enter PS Credit Hours \n');
PS_gp = input('Enter PS Grade Points \n');

CPL_ch = input('Enter CP Lab Credit Hours \n');
CPL_gp = input('Enter CP Lab Grade Points \n');

CSL_ch = input('Enter CS Lab Credit Hours \n');
CSL_gp = input('Enter CS Lab Grade Points \n');

EDGL_ch = input('Enter EDG Lab Credit Hours \n');
EDGL_gp = input('Enter EDG Lab Grade Points \n');

sem_ch = CP_ch + CS_ch+ DE_ch + CPS_ch + EDG_ch + PS_ch + CPL_ch +CSL_ch + EDGL_ch;
sem_GPA = ((CP_ch * CP_gp) + (CS_ch * CS_gp) + (DE_ch * DE_gp) + (CPS_ch * CPS_gp) + (EDG_ch * EDG_gp) + (PS_ch * PS_gp) + (CPL_ch * CP_gp) + (CSL_ch * CS_gp) + (EDGL_ch * EDGL_gp))/sem_ch;

c_GPA = ((3.83 * 16) + (3.85 * 18))/34;
disp(c_GPA);

disp('------------------------------');
disp('|        TRANSCRIPT          |');
disp('------------------------------');
disp('| Course           |  Credits |  Grade |');
disp('|-----------------|---------|--------|');
disp(['| CP               |     ', num2str(CP_ch), '  |   ', num2str(CP_gp), '   |']);
disp(['| CS               |     ', num2str(CS_ch), '  |   ', num2str(CS_gp), '   |']);
disp(['| DE               |     ', num2str(DE_ch), '  |   ', num2str(DE_gp), '   |']);
disp(['| CPS              |     ', num2str(CPS_ch), '  |   ', num2str(CPS_gp), '   |']);
disp(['| EDG              |     ', num2str(EDG_ch), '  |   ', num2str(EDG_gp), '   |']);
disp(['| PS               |     ', num2str(PS_ch), '  |   ', num2str(PS_gp), '   |']);
disp(['| CP Lab           |     ', num2str(CPL_ch), '  |   ', num2str(CPL_gp), '   |']);
disp(['| CS Lab           |     ', num2str(CSL_ch), '  |   ', num2str(CSL_gp), '   |']);
disp(['| EDG Lab          |     ', num2str(EDGL_ch), '  |   ', num2str(EDGL_gp), '   |']);
disp('------------------------------');
disp(['| Semester GPA     |         |  ', num2str(sem_GPA)])