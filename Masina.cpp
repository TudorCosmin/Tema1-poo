#include <iostream>
#include <cstring>

#include "Masina.h"

Masina::Masina(char numarInmatriculare[], char marcaMasina[], int anFabricatie) : an_fabricatie(anFabricatie) {
    strcpy(numar_inmatriculare, numarInmatriculare);
    strcpy(marca, marcaMasina);
}

std::ostream &operator<<(std::ostream &os, const Masina &masina) {
    os << "Masina " << masina.marca << " din anul " << masina.an_fabricatie
        << " are numarul de imatriculare " << masina.numar_inmatriculare << "\n";
    return os;
}

std::istream &operator>>(std::istream &is, Masina &masina) {
    std::cout << "\n";
    std::cout << "Marca masinii: \n";
    is >> masina.marca;
    std::cout << "Numarul de inmatriculare: \n";
    // daca citeste un numar de inmatriculare cu spatii o ia razzna
    is >> masina.numar_inmatriculare;
    std::cout << "Anul de fabricatie: \n";
    is >> masina.an_fabricatie;
    return is;
}

void Masina::claxon() {
    std::cout << "*claxoneaza masina* beep beep beep tiit tiit tiit *injuraturi in trafic*\n";
}

void Masina::surpriza() { // vad daca o las sau nu
    std::cout << """MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXKK0OkkkxxxkkOO0KXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOdlc:;;;;;;;;::;::;;;;;;;;:coxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMMMMMNKxl:;,;:clllllllllccccccllollllllcc;,,;cdOXWMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMWKxc;,;cloolc;'..  ,dx:      ,xkc.  ..,:cloll:,,:oONWMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMW0d:',cool:'.         lNWK:    'kNWx.         .;cool:,,ckXWMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMWKx;',loo:'              cXkOO'  .oOxKx.             .,looc,,cONMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMW0l''cdo:.                 cXo;Ox. :Ol;0k.                 'cdo:';dXWMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMWO:',odc.                    cXo.:0OdOx.,0k.                   'lddc''oKWMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMW0c.;dd:,;:'.                  :0o  lKNO, 'kx.                  ;Od..lxl''oXMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMXl.,dd:,okxkKd.                 .'.  .,;'. ...                 .l0x.   'lxc.,kNMMMMMMMMMM\n"
                 "MMMMMMMMMNk,.lxc;oko' .dXkol,          .';:ccccccccllllccc:,..           .x0c..'cxd,'ox;.cKWMMMMMMMM\n"
                 "MMMMMMMMXo.;xo..cX0:..oxl;:OK:     .;cllc:,'..   .'ckkkkkxxdoolc,.      ;OKdloxxKNk'  ;xo.,kWMMMMMMM\n"
                 "MMMMMMMK:.ck:    ,x000o.  .dK:  'cll:'.          .,xMMMMMWNKOkxxdol;.  ,0N0dl;,oOo.  .;:dx,.dNMMMMMM\n"
                 "MMMMMM0;.ox,       'dKk;'ckx;.;oo:.              .,xMMMMMMMMMMWX0xdddl'.,;.  .dOc';lxOx;.lk;.oNMMMMM\n"
                 "MMMMM0,.ox'          'd00x;':dl'                 .,xMMMMMMMMMMMMMMNOddxo'   ,ONOxkxl;.    ck:.oNMMMM\n"
                 "MMMMK;.ox'             .'.;dl.                   .,xMMMMMMMMMMMMMMMMW0doxo..cOkl;.         ck;.dWMMM\n"
                 "MMMNc.lk,               .ld,                     .,xMMMMMMMMMMMMMMMMMMW0odx;.               lk,.kWMM\n"
                 "MMWx.;kc               .do.                      .,xMMMMMMMMMMMMMMMMMMMMXdokc.              .dd.,KMM\n"
                 "MMK,.xd.              .do.                       .,xMMMMADAM ALBERTOMMMMMNxokl               ,kc.oNM\n"
                 "MWd.:k;              .do.                        .,xMMMMMMMMMMMMMMMMMMMMMMWxokc               ok.'0M\n"
                 "MX;.xd.              lx'                         .,xMMMMMMMMMMMMMMMMMMMMMMMNdok,              ,kc.dW\n"
                 "MO.,kc              'kc                          .,xMMMMMMMMMMMMMMMMMMMMMMMM0lko.             .xd.:X\n"
                 "Wd.ck,              cx'                          .,xMMMMMMMMMMMMMMMMMMMMMMMMNddk'              lk.'0\n"
                 "Wl.lk.             .dd.                          .,xMMMMMMMMMMMMMMMMMMMMMMMMMkok:              ck,.O\n"
                 "Nc.ox.             .xo                           ..;odddddddddddddddddddddddd::kc              :k;.k\n"
                 "Nc.ox.             .xd:dkkkkkkkkkkkkkkkkkkkkkkkkd'                            ,Oc              :k;.k\n"
                 "Wl.lk.             .oxoXMMMMMMMMMMMMMMMMMMMMMMMMX;                            :O;              ck,.O\n"
                 "Wd.:O,              cklOMMMMMMMMMMMMMMMMMMMMMMMMX;                            ok.              ok.,K\n"
                 "MO.'kc              .xdoNMMMMMMMMMMMMMMMMMMMMMMMX;                           'ko              .xo.cN\n"
                 "MX:.dx.              cklkWMMMMMMMMMMMMMMMMMMMMMMX;                          .ok'              ;O:.dW\n"
                 "MWx.:O;              .oxlOWMMMMMMMMMMMMMMMMMMMMMX;                          cO;              .dx.,KM\n"
                 "MMX;.dx.              .dxlOWMMMMMMMMMMMMMMMMMMMMX;                         cO:               ;k:.dWM\n"
                 "MMWk.,kl               .okoxNMMMMMMMMMMMMMMMMMMMX;                       .ok:               .xo.:XMM\n"
                 "MMMNo.:k;               .cxdo0WMMMMMMMMMMMMMMMMMX;                      ,xx'               .ox''OMMM\n"
                 "MMMMXc.lk,                'oxod0WMMMMMMMMMMMMMMMX;                    .okc.               .lk,.xWMMM\n"
                 "MMMMMK:.lk;                 ,oxddOXWMMMMMMMMMMMMX;                  ,oxl.                .lk,.dWMMMM\n"
                 "MMMMMMK:.ck:                  'ldddxOKWMMMMMMMMMX;               'cddc.                 .ox,.dNMMMMM\n"
                 "MMMMMMMXl.;xl.                  .;lddxxxkOKNWWMMX;          ..;lddc'                   'xd''kWMMMMMM\n"
                 "MMMMMMMMNd''dd,                    .':loddxxkkkkd;....',:cloool;.                    .ckc.;0WMMMMMMM\n"
                 "MMMMMMMMMW0:.:xl.                       .';:clllllllllllc:,..                       ,dd,.oXMMMMMMMMM\n"
                 "MMMMMMMMMMMNx''lxc.                                                               'ox:.:0WMMMMMMMMMM\n"
                 "MMMMMMMMMMMMWKo''lxc.                                                           ,od:.;kNMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMWKo''ldo,.                                                     .:dd;.;kNMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMWXd;':odc'.                                               .;odl,'ckNMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMNOl,':odl;.                                        .':ool;';dKWMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMWXkl,,;lool;'.                               .,clooc,';o0NMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMWN0d:,,;clollc;,...               ..',:clool:;,;lxKWMMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0xl:,,;:cllllllllllllllllllllllc:;;,;cokKNMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxoc:;;;;;;;;;;;;;;;;;;:cldk0XNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                 "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXK0OOkkxxxkkO0KXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM""";
}
