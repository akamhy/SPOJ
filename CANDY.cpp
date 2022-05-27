#include <bits/stdc++.h>

/*

Date: 27 May 2022
Link: https://www.spoj.com/problems/CANDY/

*/

int main() {

    while (1) {

        int packets = 0;
        std::cin >> packets;

        if (packets == -1) {
            break;
        }

        // std::cout << packets << std::endl;

        std::vector<int> packet_list;
        int sum = 0;
        int packet_count = 0;

        for (int i = 0; i<packets; i++) {
            int packet;
            std::cin >> packet;
            sum += packet;
            packet_count += 1;
            packet_list.push_back(packet);

            // std::cout << "packet " << packet << std::endl;
            }

        if (sum % packet_count != 0) {
            std::cout << "-1" << std::endl;
        }
        else {
        
        int moves = 0;
        
        int candy_per_packet = sum / packets;

        for (auto i = packet_list.begin(); i != packet_list.end(); ++i) {
            int diff = candy_per_packet - *i;
            if ( diff > 0 ) {
                moves += diff;
            }
        }

        std::cout << moves << std::endl;

        }
    }



    return 0;
}