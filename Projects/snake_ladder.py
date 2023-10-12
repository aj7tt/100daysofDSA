import random

class Game:
    def __init__(self, num_players):
        self.BOARD_SIZE = 100
        self.SNAKES_AND_LADDERS = {
            16: 6, 47: 26, 49: 11, 56: 53, 62: 19, 64: 60, 87: 24, 93: 73, 95: 75, 98: 78,
            1: 38, 4: 14, 9: 31, 21: 42, 28: 84, 36: 44, 51: 67, 71: 91, 80: 100
        }

        self.players = [{'name': f'Player {i}', 'position': 1} for i in range(1, num_players + 1)]

    def roll_die(self):
        return random.randint(1, 6)

    def move_player(self, player, steps):
        current_position = player['position']
        new_position = current_position + steps
        position_history = f"{current_position} -> {new_position}"

        if new_position <= self.BOARD_SIZE:
            player['position'] = new_position

            if new_position in self.SNAKES_AND_LADDERS:
                snake_or_ladder = self.SNAKES_AND_LADDERS[new_position]
                player['position'] = snake_or_ladder
                position_history += f" ({new_position} -> {snake_or_ladder})"

        return player['position'], position_history

    def play(self):
        while True:
            for player in self.players:
                input(f"{player['name']}, press Enter to roll the die.")
                roll = self.roll_die()
                print(f"{player['name']} rolled a -> {roll}")
                new_position, position_history = self.move_player(player, roll)
                print(f"Current position of {player['name']} == {position_history}")

            result_str = "\n-------------- Current Position -------------\n"
            result_str += " && ".join([f"{player['name']} == {player['position']}" for player in self.players])
            print(result_str)
            print("------------------------\n\n\n")

            if any(player['position'] == self.BOARD_SIZE for player in self.players):
                for player in self.players:
                    if player['position'] == self.BOARD_SIZE:
                        print(f"{player['name']} wins!")
                return

if __name__ == "__main__":
    num_players = int(input("Enter the number of players: "))

    game = Game(num_players)
    game.play()
