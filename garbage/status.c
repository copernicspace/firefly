import random
from datetime import datetime

def get_rocket_status():
    states = ['On Earth', 'In transit', 'On the moon', 'LOS']
    state = random.choice(states)
    
    if state == 'In transit':
        data = {
            'state': state,
            'distance_from_earth': f"{random.randint(10000, 200000)} km",
            'distance_to_moon': f"{random.randint(10000, 200000)} km",
            'speed': f"{random.randint(1000, 30000)} km/h"
        }
    elif state == 'On the moon':
        data = {
            'state': state,
            'nearest_crater': random.choice(['Tycho', 'Copernicus', 'Kepler']),
            'landing_time': datetime.utcnow().strftime('%Y-%m-%d %H:%M:%S')
        }
    else:
        data = {'state': state}
    
    return data
