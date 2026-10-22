import java.io.*;
import java.net.*;

public class ChatClientX
{
    public static void main(String A[]) throws Exception
    {
        try
        {
            Socket sobj = new Socket("localhost", 5100);
            System.out.println("Client gets connected with the Server Successfully");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
            BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Marvellous client is Running.");
            String str1 = null, str2 = null;
            System.out.print("Enter message for server : ");
            
            while((str1 = bobj2.readLine()) != null && !str1.equals("end"))
            {
                pobj.println(str1);
                str2 = bobj1.readLine();
                System.out.println("Server says : " + str2);
                System.out.print("Enter message for server : ");
            }
            pobj.close();
            bobj1.close();
            bobj2.close();
            sobj.close();
            //
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}