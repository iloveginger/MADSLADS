#include<iostream>
#include "Goblin.h"
using namespace std;

Goblin::Goblin(){
    cout<<" A wild goblin appears!!\n";
    cout<<R"(||"/-""-/--/-;;;;;;;;,;;;::::,,,,,,,,:;;;;///;;-;;;;::::--;:-;;~~;;///--"~-""
|/"|/""/"--~/";/;;;;/;/;/;;/;//;;;/-/______________/;;;;;;;;-/--;|;/;;/--"---
-||"|-((//-"----|/"|/________________vvx}ljjl}ijn!____//;;;;/////|~/-""/-\>(-
\\\"/-~~\\~/((>_(________vivxxxxvvxjjjjjjjjjjuyL_I____________)__(\\>(>\^\>>>
\_____/(\\))_)>_______xl}YjjjjjjujjjjwwwwwwyywP'1uu=lv_______\___\_)(\^)_^\(>
\\\\\\\\\_>^<>_^_+__?l{IYjtjjjjjjw77777*yyyyph'ywuuzjllx_+x____+_\<\)_))_)^)(
\\\\\\/<\\>____+__?v}{Ijjj~YLLww*Lyyyyau,*dgG~.Fww[%j[Ilvv_____x_((___(^___^>
(\\\\\<)_\_\)___+vv?{{=Yjji;VwyTqgggggFPi,dF[,aNyww[[j==l?vxvx___(__\_\___()<
~((()>^)_<\_(___xv}?}I{Yjjj>~hy[d$F#Mg#4!;~W(vMqTLLwj[jI{{{v__+v+^_\)___+\\)<
~~)<_^<\_\______v??{?{jJjjo1(?*jT54T#5FL(;j*>fy4pyLw%[[[?{l{vx___v(_)_^(_\\\(
^^>>\___\_____xvv{{?!YjjtjLq,_[TdFM#M$TL[_T!>vUb4[*wLVV=I={lxx_+___\_____\\>_
_______\______x?}{l!{jCJjjOT[`7CTPdZ$TM#!~!;>f9QPL[%[[Vj[Ill}x_+x__>________(
))____+(+++_x+vv{{l}?jYjfwoUb;~~,~?*!~~~`)v1vybF44p?L[jzjuIl}{x+v___xx_xx___)
)\^+_____+___?}{?{{Y=jjj]oTqM[Y_u___,ujL_x?[jy2&4TTULwjtujuI{l{i______i__x___
<______v__xvv?i{{IYIYYJjjLmTq[Jgyj##uvCy4~~jgg&MbyypLwwkzjjII{lvv___+_vx_+_+_
<____vvv__?ixi{v?=jjjJjjwwyqy[~7Vf7?^^MR!''d&gggWbbpLykLk%jj[I=l+vxii_+ix+vi+
\___x+___+_+_v?IIYjujVjjwyqyyy~\j#_,_w!^''~7$g&MgpDpmhwwLw[rz[Ilv++ix++x?___+
>________vi_}{?YYCjJjtowwTqTadL_jT#**Tnl,'.`"*!LdMM4yTywLU[j1j=Il+x+??ivv?ii+
\__+++__?+xvv{{IYjfVtt%oTyadbdF[i~!t^~=I>..,`:;TggNb**ypwwLw%[[I}??_??++{?_v_
)____+_x___v?!?=CjVtO]%wyq*yWb!^j1juj/t+~.,;//__7:qbTpqyLwwL[[[ll+xv+xi?{?_+_
)\_x+_x{+___vlYYufjjj%wwTydPT*(;>L?+~;?'.-/>)j+jx(QD4yNmyyww[r[I!vixx+xv{++i+
\_xvx+i+v+vv}{?tjjj]jwwLTad[_+(;,Xyww['.:>)((Tyw!;Jg&4pyqL*Lw[[I}l+x?vx{++++i
__++?{_xv+?v??YjJj7ojwhTTTdvI=_-;,TF7'.;;\_~jd*L!j\7?byKppTLw[[Il{++xx?i?}_++
__x_?++?_vi_}!{JVjoLLUTyTa4_jj}\x;`'.';\___>7Toyp*[,tbbbpm*ww][I{{}i++???+v+_
__+v_?_xixivvIYfj7LwwyyqyaI_7px>ji;.',;_vjxjl7w#!j[:~4WM&TTTL[[[Il?x_}?{__v^^
_+_v??xv?vv{?YYjjwwwyyTyTd*_?[I~jjxi_;vwr[^jI~TIj!'\vgW4byK*ww[1={l{vvx?}ix_)
__iv!vvv}}?l?jYjjUThyqyyTdL,^+"xfyyujwym[_jvp(~!f_,/_QQd4pNmykn1=}{}{+vvvi+i\
____vi{v?v?}YYJjwLwyyqyyadF;>+>jJaaya*T7yyy(Ti?_>>__!TF&44m*hwVjVIll!?_}}?i^^
_^+_vv{{?}{{=IjtOwUyyTyddd*|_|?[uTZ#*yuT$&[(>[~[_i_^??74W&ppLw[zj==}{l{vv?+__
^>+xv{!!{{}?YjJjoTT*qyybdd[_!'??jyTydgy7FPL("!;^+YI_vgg44PyyLT[z[[=}Il!{vv_i_
\>i+v}}?{l!IY=j]OwTTyTTbgd$^).~^7T7G##R[7*[('~|;>/~~"dgF&&*TLw[[[[III{{l?v}+_
\_+vi{!{l{{IjYJOoyyTTKdddgg(",~~Y[!sgWT*?7!:'~)>^_:-,adFM44TTLf[r[==II{l!{x+i
>_vxv{!?{{=YCtJjOUyTydabdg*u/,'~?~jLT*[pii~'.l~~>jz_:tdFF4*yLLk1zzIII=Il}}?__
)__+}l!{?==jY1JjLh3yaHMPT*v7('~;~_jygyq7+(:._g;Y,?**x"gg&bKTLLkV7zY[I?Il}!_i_
\)x_?!{{?{IYY7VowUmP4Td[*j[~'':'>xjdMRP+((',,ggdb~??~_7Q4QbKLw[V[[V[==II}!x++
\>+_}!I{jIIjVjVwwTyLXWdnjd[...[,vvjbaF[+j('`_Zg#g[`'_*lTg4FTTLwn[[=j=I=={?++i
>>+_?l}}YIYjVjVjwTTa_TbvjM(;.jL>_l7T7juj[;.-jggZZg_,jpYjW7_sTLLV][VY===Ilx+ii
^>v_}!IYY[IjujV%TTTa[j&^j*x_:j4/vlIjgy[VI;'.gggZgg[YpL?7?^sNpwL7[][[jj[I={+++
))_v?lIYI==Yjjf%TTmqL?[?f[}'_d$'~?}d5F[v!:,vZgggMg[?[7_/-j4yTLk[1VV[[[=I=}?+x
\^_v{{IY[V[zjr7OwTqaLv(jxj(>j$-v_~7TTT[Y~''.d00ggd[v![i;_NNqpw[[V1YYY===Ilx+(
>_vv?IYIV[Yjjj7OTTTdP">?{[;/d$\~?!>j??+^';/;?ggg$d[;[?(;j4NT*w[VVzYYYV[[={+i_
>>+_?!==jYJjVjjJ*Tad*_>jn(-j$*l;`~_[__;,x!+',TZZRd[>[I'>apqpTwrjJV[VzVV[Il++_
>___?IIjjjjjjjjTUTddLy\If'~g*Lf=x;jyUNp+?~'/_:TFFg[v[!~vT&qyhw[1VJ[YYVV[={++_
^__v?YY=jJJtjV%LTqNbd$_?i,aF:7brwTjT**h\;_iu~;_TwFLYI_,j44qT*wrVJntJzVVYI{i+_
>>???IYYjj[jjV[TTqHMd*_jl\Fn;l^tj?**t*[ijnr[x^Xg5Fvf?+:wT**TLLrtuV[1=[Y=={!++
>)_}?IjJjj]tjw%wyTddZ!'_~_[,^?_-Xj____jwLjwj^,,Tg(}!_~`TDKTTwLrtV[r[czV[[!{i(
>)??}YYfVt1j7[%wTaddd[yaI;?_:,7y=l7777Ly*T+"/_,\I'~;;;j44TTTTO17Ctj1=JVVIl!i<
^>v?YIujtjt]jOLTTTdMgLTT[(j(_y[??++???7?!~;jwu(,);a*[Ib4TTUTwk[VVnr7[zV[[!{+(
\)_??YjjOnj%%jOwTaWdMN[TI~?)jd&_,.\,.'`',_yggyx;~;T*[zf4pTTTLk[j7jr[JJ[[={!+(
\)v?YjjJJXt%L%UTTaMQ*7^7L;_~qdFL;'/_(.>'vaggFP[(,"`7[[YTyTTTwL[7VJ[rzzYVI{!i)
>_v?YYJCrtjhwwUUTaMdL~u_!~j_TFFL(,|}i.._jMZRFP[_;~.`>IY44qTTLO[[7ttVJ1[[Ill+\
->_v?YjjXj%kwowyadMdL_k,?.g>wT9*(:iIl'`"?TMF&L[(;".-_?yyTTUyLL[VV7jVt7V[I{!i\
")_?YYJtjooLq*pTadd*j?[\/_*>j7T[(;IY[(.~?7TTT7!(;,,_vg4KTy*K*L[%jV[JVj[Y[lv+<
~>v?IfJtwwwwwTyyaQPj7z^\-vL_?77!(;+Y[(,->!777!_|;,iivQWp4*UhLO[t7t[7fr1YII!+(
/>v{Itj7%JwTUTyadPv!J+^`~v[juj?+_;?j[-;-~^__jwsrv(g4vPbbyTUhLL1tV[u[Vrj[[?l_<
|\+?IjjjowwwyyTab!!J~~~1`j[jTTpqssJj1__L__jyyTL!!!M4v&N4T*TLLk[tV]fjtV[1={!i(
->v??jjwwwyyyyma!+J~~-dgyM[Y?7qKLLrjL^TgjjwFhT[!{ldF_&y*TTThLw%tVt[[ff[J={!+(
->v?YJjowTTqyNy[^}~:\4dMMM_^{I7*qp[Yk_J0[jwPL*[vj}TF_TTKqT**Lw[7nttt7Jn1[!{_(
~>_!jj%wwyyqTy[^v~''dWFMFFL___^+777??iJ$_Jjw7?+^'v&M_MKT*TTLT%[7VttVJtn[V!{_<
->_?YjwwTyypy*~_~`'ddNMM4Q[Yh*zi;,~v|_?!?+?-~';;;;Tg/yKTTUqwww[jV[nVttf[V{?_<
->v?jjoyyTp44\_^`_yb4TPTTM[?77[!(;,~gggg_`';vujujl/F(4pyUyK*LLo7jj7jttVr={v_\
~>v?VjwTqqaF(_~'`gTDPdM**NL~^+^^~-;:?E0Z!.>Ywy**TI:T[*yq***Tww[1]]7jj[jn[I!+_
/>vYjwwUyad!\~..a&MbayaTydb_`~~~;x~'.gE$.,_?77Tm[('f[TpyyyyLwwk]jOwoj%[j1[li(
;>_YjLyTyd*\"'-qFMaMMb4yadWFa[+!!'';d#Zg_~++??!7!:'g~yqypyyshwLow[j%wk%%z[!+_
->_YjwUyaP::'-qQg4&MWWWdW&4gWdz,,,,~?T#gx^u_~~~~'_dP,byay4pqqywwLwoowLO[1[{+(
~>}jjwTdg~`'`qgQ2&&&dg&gdaggWg$az~-:.~##g_`?x;x,jggL(4bMb44pyUsLwwwsLowojzIl_
">vjjqyd!''.a5gdMggddgdggdddgZgg6,,,;.T##gL;_+'`gZg[[?gWWW444q*T*yyLwwsLkz[l_
>_jjwadP'`.jgZ4&dMZZggMWWWWgggg$~__?,_g##gF+^~:.ZZZui'&ggWWdppyhmymmyywww[[li
>_juyag~'.jM&gggZggggggggggggggF_Y7x_gZ###[;__._ggZg(,gWgggMdappyTyyyqyyLj[Ii
>vjwddF''jZg&&g$ggZZZggggggggg$!_II!^9MFFF[u**_vMMR#bgg&ggg4bdHyyymypyyyp[{Il
_?wydg!.w0ggRFRgZZZZggg$$MFMFFtjjwu_+?^^^^I!-_^/?7w#$5Zgggggg4Fbbp4ayyyyy$/{l
_jwad$.aRRRFFFMF5FMFFFF***y*pl^?J7u>l'``:"_vjux,.`~??77TTTTMMMP4M9MbgMFb*:TJ[
>Y7TQ[aF5MFMMTT***T77??????f^sr_!~?'~'`,::tf7Yjjux'`~~~^^^^^+?!777TTMMdP;_*7[
~??7TTTTTP*LIi__~~~~~::''`"^~7?~:''`''.''>!z!!&?*ti.,.,`'~|/____xjjUTT?_j*Cy!
~~??777TTT77jujjx____;;;,,,,,:```',,;:;;;>?*?[7I77(,:;;;__x=juujjuo%w(%7F77[x
:~~^??777777jXXLwo[uxvx________x=uuuujj_x;~i?!~+`~;__uuuuzowwO[O777o7/_t7!?~~)";
    health = 40;
    attack_value = 40;
    mana = 10;
}

int Goblin::attack(){
    return attack_value;
}
int Goblin::take__damage(int atk_damage){
    health =  health -  atk_damage;
}

int Goblin::gethealth(){
    return health;
}
