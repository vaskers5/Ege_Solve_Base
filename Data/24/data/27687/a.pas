var maxLen, curLen, i: integer;      
    s: string;
begin
  assign(input, '24_demo.txt');  
  readln(s);
  maxLen := 1;
  curLen := 1;
  for i:=2 to Length(s) do 
    if (s[i] = s[i-1]) and (s[i] = 'Y') then begin
      curLen := curLen + 1;
      if curLen > maxLen then
        maxLen := curLen;
    end
    else
      curLen := 1;
  writeln(maxLen);
end.