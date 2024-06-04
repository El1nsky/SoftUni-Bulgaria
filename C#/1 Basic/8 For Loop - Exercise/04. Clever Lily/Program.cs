namespace _04._Clever_Lily
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int lily_age = Convert.ToInt32(Console.ReadLine());
            double washing_machine_price = Convert.ToDouble(Console.ReadLine());
            int toy_price = Convert.ToInt32(Console.ReadLine());

            int toys_count = 0;
            double saved_money = 0;

            for (int i = 1; i <= lily_age; i++)
            {
                if (i % 2 == 0)
                {
                    saved_money += (i / 2) * 10 - 1;
                }
                else
                {
                    toys_count++;
                }
            }

            double total_money_from_toys = toys_count * toy_price;
            saved_money += total_money_from_toys;

            if (saved_money >= washing_machine_price)
            {
                double remaining_money = saved_money - washing_machine_price;
                Console.WriteLine("Yes! {0:F2}", remaining_money);
            }
            else
            {
                double money_needed = washing_machine_price - saved_money;
                Console.WriteLine("No! {0:F2}", money_needed);
            }
        }
    }
}